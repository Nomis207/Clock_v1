#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addsubjectdialog.h"
#include "managesubjectdialog.h"

#include <QDateTime> //new
#include <QDebug>
#include <QFile>
#include <QColor>
#include <QPropertyAnimation>
#include <QLineEdit>
#include <QEvent>
#include <QSoundEffect>
#include <QMessageBox>
#include <QGuiApplication>
#include <QStyleHints>
#include <QCoreApplication>
#include <QStyleFactory>

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // load settings
    QSettings settings("MeineApp", "Clock_v1");

    ui->setupUi(this);
    uhrTimer = new QTimer(this);
    connect(uhrTimer, &QTimer::timeout, this, &MainWindow::aktualisiereUhr);
    uhrTimer->start(1000);
    aktualisiereUhr();

    //stopwatch
    stoppuhrTimer = new QTimer(this);
    stoppuhrZeit.setHMS(0, 0, 0, 0); // set to 00:00:00.000
    stoppuhrLauft = false;

    connect(stoppuhrTimer, &QTimer::timeout, this, &MainWindow::aktualisiereStoppuhr);

    //studie
    studieTimer = new QTimer(this);
    studieTime.setHMS(0, 0, 0);
    studieRun = false;

    connect(studieTimer, &QTimer::timeout, this, &MainWindow::updateStudieClock);

    //analogbutton
    analogActive = false;

    //timer
    countdownTimer = new QTimer(this);
    TimerActive = false;
    connect(countdownTimer, &QTimer::timeout, this, &MainWindow::tickCountdown);

    TimerHour = 0;
    TimerMinute = 0;
    TimerSecond = 0;

    ui->hour_input->installEventFilter(this);
    ui->minute_input->installEventFilter(this);
    ui->second_input->installEventFilter(this);

    ui->shortCut_one->installEventFilter(this);
    ui->shortCut_two->installEventFilter(this);
    ui->shortCut_three->installEventFilter(this);
    ui->shortCut_four->installEventFilter(this);
    ui->shortCut_five->installEventFilter(this);

    alarmSound = new QSoundEffect(this);
    alarmSound->setSource(QUrl("qrc:/alarmClock/AlarmClock/Timer1.wav"));
    alarmSound->setLoopCount(QSoundEffect::Infinite);
    alarmSound->setVolume(0.5);

    shortCut1 = settings.value("Shortcut_1", 0).toInt();
    shortCut2 = settings.value("Shortcut_2", 0).toInt();
    shortCut3 = settings.value("Shortcut_3", 0).toInt();
    shortCut4 = settings.value("Shortcut_4", 0).toInt();
    shortCut5 = settings.value("Shortcut_5", 0).toInt();

    updateTimerShortcuts();

    //studie load subjects
    refreshSubjectBox();

    //themes
    currentTheme = AppThemes::Classic;
    applyAppThemes(currentTheme);

    //settings
    bool isDark = settings.value("darkModeEnabled", false).toBool();
    ui->Darkmode->setChecked(isDark);
    on_Darkmode_checkStateChanged(isDark ? Qt::CheckState::Checked : Qt::CheckState::Unchecked);
}

//themes

ThemeData MainWindow::getThemeData(AppThemes theme) {

    //path, hourColor, minuteColor, secondsColor, OutlineColor, hourmarkColor, minutemarkColor

    switch (theme) {
    case AppThemes::Classic:
        return { ":/themes/classic/Themes/classic/", Qt::black , Qt::black , Qt::black, Qt::black, Qt::black, Qt::black };
    case AppThemes::Splatoon:
        return { ":/themes/splatoon/Themes/Splatoon/", Qt::magenta , Qt::magenta , Qt::magenta, Qt::magenta, Qt::magenta, Qt::magenta };
    case AppThemes::Red:
        return { ":/themes/red/Themes/Red/", Qt::red , Qt::red , Qt::red, Qt::red , Qt::red , Qt::red  };
    case AppThemes::Green:
        return { ":/themes/green/Themes/Green/", Qt::green , Qt::green , Qt::green, Qt::green, Qt::green, Qt::green  };
    }
    return { ":/themes/classic/Themes/classic/", Qt::black , Qt::black , Qt::black, Qt::black  , Qt::black  , Qt::black    };
}

void MainWindow::applyAppThemes(AppThemes theme){
    currentTheme = theme;
    ThemeData data = getThemeData(theme);
    QString path = data.iconPrefix;
    QString startStopFile = stoppuhrLauft ? "stopbtn.png" : "startbtn.png";
    QString AnalogFile = analogActive ? "analogbtn_check.png" : "analogbtn.png";
    QString TimerFile = TimerActive ? "stopbtn.png" : "startbtn.png";
    QString startStopStudieFile = studieRun ? "stopbtn.png" : "startbtn.png";

    QString fullStartPath       = path + startStopFile;
    QString fullResetPath       = path + "resetbtn.png";
    QString fullAnalogPath      = path + AnalogFile;
    QString fullTimerPath       = path + TimerFile;
    QString fullResetTPath      = path + "resetTbtn.png";
    QString fullUpPath          = path + "up.png";
    QString fullDownPath        = path + "down.png";
    QString fullStudieStartPath = path + startStopStudieFile;
    QString fullResetStudiePath = path + "resetbtn.png";
    QString fullFramePath       = path + "frame.png";
    QString fullAddPath         = path + "add.png";
    QString fullStatisticPath   = path + "statistic.png";
    QString fullEditPath        = path + "edit.png";

    //themes
    QString fullClasicPath   = ":/themes/classic/Themes/classic/ClassicTheme.png";
    QString fullSplatoonPath = ":/themes/splatoon/Themes/Splatoon/SplatoonTheme.png";
    QString fullGreenPath    = ":/themes/green/Themes/Green/Green_Theme.png";
    QString fullRedPath      = ":/themes/red/Themes/Red/Red_Theme.png";
    // set Icon

    // Stopwatch start/stop
    ui->start_stop_button->setIcon(QIcon(fullStartPath));
    ui->start_stop_button->setIconSize(QSize(256, 64));
    //reset
    ui->reset_button->setIcon(QIcon(fullResetPath));
    ui->reset_button->setIconSize(QSize(256, 64));
    //Analogbutton
    ui->AnalogChange->setIcon(QIcon(fullAnalogPath));
    ui->AnalogChange->setIconSize(QSize(128, 32));
    //Timer start_stop
    ui->StartT_StopTbtn->setIcon(QIcon(fullTimerPath));
    ui->StartT_StopTbtn->setIconSize(QSize(256, 64));
    //Timer reset
    ui->resetTbtn->setIcon(QIcon(fullResetPath));
    ui->resetTbtn->setIconSize(QSize(256, 64));
    //up hour
    ui->hourDown->setIcon(QIcon(fullDownPath));
    ui->hourDown->setIconSize(QSize(32, 32));
    //down hour
    ui->hourUp->setIcon(QIcon(fullUpPath));
    ui->hourUp->setIconSize(QSize(32, 32));
    //up minute
    ui->minuteDown->setIcon(QIcon(fullDownPath));
    ui->minuteDown->setIconSize(QSize(32, 32));
    //down minute
    ui->minuteUp->setIcon(QIcon(fullUpPath));
    ui->minuteUp->setIconSize(QSize(32, 32));
    //up second
    ui->secondDown->setIcon(QIcon(fullDownPath));
    ui->secondDown->setIconSize(QSize(32, 32));
    //down second
    ui->secondUp->setIcon(QIcon(fullUpPath));
    ui->secondUp->setIconSize(QSize(32, 32));

    //studie start/stop
    ui->start_stop_studie->setIcon(QIcon(fullStudieStartPath));
    ui->start_stop_studie->setIconSize(QSize(128, 32));
    //studiereset
    ui->reset_studie->setIcon(QIcon(fullResetStudiePath));
    ui->reset_studie->setIconSize(QSize(128,32));
    //studieadd
    ui->addSubject->setIcon(QIcon(fullAddPath));
    ui->addSubject->setIconSize(QSize(32,32));
    //studieStatistic
    ui->StatisticsSwitch->setIcon(QIcon(fullStatisticPath));
    ui->StatisticsSwitch->setIconSize(QSize(128, 32));

    //settings
    //studie
    ui->Edit_Studie->setIcon(QIcon(fullEditPath));
    ui->Edit_Studie->setIconSize(QSize(128,32));

    //themes
    ui->Classic_Theme->setIcon(QIcon(fullClasicPath));
    ui->Classic_Theme->setIconSize(QSize(128, 32));

    ui->Splatoon_Theme->setIcon(QIcon(fullSplatoonPath));
    ui->Splatoon_Theme->setIconSize(QSize(128, 32));

    ui->Red_Theme->setIcon(QIcon(fullRedPath));
    ui->Red_Theme->setIconSize(QSize(128, 32));

    ui->Green_Theme->setIcon(QIcon(fullGreenPath));
    ui->Green_Theme->setIconSize(QSize(128, 32));

    //timer settings
   // ui->shortCut_one->setIcon(QIcon(fullFramePath));

    // Transparetn background
    QString transparentStyle = "border: none; background: transparent;";
    ui->start_stop_button->setStyleSheet(transparentStyle);
    ui->reset_button->setStyleSheet(transparentStyle);
    ui->StartT_StopTbtn->setStyleSheet(transparentStyle);
    ui->resetTbtn->setStyleSheet(transparentStyle);
    ui->hourUp->setStyleSheet(transparentStyle);
    ui->hourDown->setStyleSheet(transparentStyle);
    ui->minuteUp->setStyleSheet(transparentStyle);
    ui->minuteDown->setStyleSheet(transparentStyle);
    ui->secondUp->setStyleSheet(transparentStyle);
    ui->secondDown->setStyleSheet(transparentStyle);
    ui->start_stop_studie->setStyleSheet(transparentStyle);
    ui->reset_studie->setStyleSheet(transparentStyle);
    //themes
    ui->Classic_Theme->setStyleSheet(transparentStyle);
    ui->Splatoon_Theme->setStyleSheet(transparentStyle);
    ui->Red_Theme->setStyleSheet(transparentStyle);
    ui->Green_Theme->setStyleSheet(transparentStyle);


    //timer settings
    QString frameStyle =
        "border-image: url(" + fullFramePath + ");"
                                               "background-color: transparent;"
                                               "border: none;"
                                               "color: " + data.hourColor.name() + ";";

    ui->shortCut_one->setStyleSheet(frameStyle);
    ui->shortCut_two->setStyleSheet(frameStyle);
    ui->shortCut_three->setStyleSheet(frameStyle);
    ui->shortCut_four->setStyleSheet(frameStyle);
    ui->shortCut_five->setStyleSheet(frameStyle);

    //TimerTab
    ui->coustom_shortcut_1->setStyleSheet(frameStyle);
    ui->coustom_shortcut_2->setStyleSheet(frameStyle);
    ui->coustom_shortcut_3->setStyleSheet(frameStyle);
    ui->coustom_shortcut_4->setStyleSheet(frameStyle);
    ui->coustom_shortcut_5->setStyleSheet(frameStyle);

    //analog Clock
    ui->Analog_Clock->setColors(data.hourColor, data.minuteColor, data.secondColor, data.outlineColor, data.hourmarkColor, data.minutemarkColor);

    //hover

}

//animation
void MainWindow::animateButtonClick(QPushButton *button, QSize normalSize, QSize pressedSize){
    QPropertyAnimation *animation = new QPropertyAnimation(button, "iconSize");
    animation->setDuration(150);
    animation->setKeyValueAt(0, normalSize);
    animation->setKeyValueAt(0.5, pressedSize);
    animation->setKeyValueAt(1, normalSize);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::animateButtonGeometry(QWidget *widget){

    QPropertyAnimation *animation = new QPropertyAnimation(widget, "geometry");
    animation->setDuration(150);

    QRect normalGeo = widget->geometry();

    QRect pressedGeo = normalGeo.adjusted(4, 4, -4, -4);

    animation->setKeyValueAt(0, normalGeo);
    animation->setKeyValueAt(0.5, pressedGeo);
    animation->setKeyValueAt(1, normalGeo);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}


//themebuttons

void MainWindow::on_Classic_Theme_clicked(){
    applyAppThemes(AppThemes::Classic);
    animateButtonClick(ui->Classic_Theme, QSize(128, 32), QSize(100, 25));
}

void MainWindow::on_Splatoon_Theme_clicked(){
    applyAppThemes(AppThemes::Splatoon);
    animateButtonClick(ui->Splatoon_Theme, QSize(128, 32), QSize(100, 25));
}

void MainWindow::on_Red_Theme_clicked(){
    applyAppThemes(AppThemes::Red);
    animateButtonClick(ui->Red_Theme, QSize(128, 32), QSize(100, 25));
}

void MainWindow::on_Green_Theme_clicked(){
    applyAppThemes(AppThemes::Green);
    animateButtonClick(ui->Green_Theme, QSize(128, 32), QSize(100, 25));
}

//clock

//update Clock
void MainWindow::aktualisiereUhr()
{
    QString aktuelleZeit = QDateTime::currentDateTime().toString("hh:mm:ss");
    ui->label_time->setText(aktuelleZeit);
}

//update stopwatch
void MainWindow::aktualisiereStoppuhr() {
    stoppuhrZeit = stoppuhrZeit.addMSecs(100);
    ui->label_Stopuhr->setText(stoppuhrZeit.toString("hh:mm:ss.z"));
}
//update Studie
void MainWindow::updateStudieClock(){
    studieTime = studieTime.addMSecs(100);
    ui->studie_time->setText(studieTime.toString("hh:mm:ss"));

    QString subject = ui->Subject_select->currentText();
    if (!subject.isEmpty()) {
        QSettings settings("MeineApp", "Clock_v1");

        int totalMs = settings.value("Faecher/" + subject, 0).toInt();
        totalMs += 100;

        settings.setValue("Faecher/" + subject, totalMs);

        QTime gesamtZeit(0, 0, 0);
        gesamtZeit = gesamtZeit.addMSecs(totalMs);
        ui->studie_total->setText(gesamtZeit.toString("hh:mm:ss"));
    }
}

//timer

void MainWindow::tickCountdown()
{
    if(TimerHour == 0 && TimerMinute == 0 && TimerSecond == 0){
        countdownTimer->stop();
        TimerActive = false;
        applyAppThemes(currentTheme);

        alarmSound->play();

        QMessageBox::information(this, "ALLERT!!!", "Timer run out");

        alarmSound->stop();
        return;
    }

    if (TimerSecond <= 0) {
        TimerSecond = 59;

        if (TimerMinute == 0) {
            TimerMinute = 59;
            TimerHour--;
        } else {
            TimerMinute--;
        }

    } else {
        TimerSecond--;
    }

    updateTimer();
}

void MainWindow::on_hour_input_editingFinished()
{
    bool ok;
    int wert = ui->hour_input->text().toInt(&ok);
    if (ok) {
        if(wert >99){
            wert = 99;
        }
        if(wert <0){
            wert = 0;
        }
        TimerHour = wert;
    }

    updateTimer();
}

void MainWindow::on_minute_input_editingFinished(){
    bool ok;
    int wert = ui->minute_input->text().toInt(&ok);
    if(ok) {
        if(wert>59){
            wert = 59;
        }
        if(wert <0){
            wert = 0;
        }
        TimerMinute = wert;
    }
    updateTimer();
}

void MainWindow::on_second_input_editingFinished(){
    bool ok;
    int wert = ui->second_input->text().toInt(&ok);
    if(ok){
        if(wert>59){
            wert = 59;
        }
        if(wert<0){
            wert = 0;
        }
        TimerSecond = wert;
    }
    updateTimer();
}

void MainWindow::updateTimer() //update Timer
    {
        QString hourStr   = QString("%1").arg(TimerHour, 2, 10, QChar('0'));
        QString minuteStr = QString("%1").arg(TimerMinute, 2, 10, QChar('0'));
        QString secondStr = QString("%1").arg(TimerSecond, 2, 10, QChar('0'));

        ui->hour_input->setText(hourStr);
        ui->minute_input->setText(minuteStr);
        ui->second_input->setText(secondStr);
    }

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
    {
        if (event->type() == QEvent::FocusIn) {
            QLineEdit *field = qobject_cast<QLineEdit*>(watched);
            if (field) {
                QTimer::singleShot(0, field, &QLineEdit::selectAll);
            }
        }
        return QMainWindow::eventFilter(watched, event);
    }


//studie

void MainWindow::on_Subject_select_currentTextChanged(const QString &subject)
    {
        if (subject.isEmpty()) return;

        QSettings settings("MeineApp", "Clock_v1");
        int gesamtMs = settings.value("Faecher/" + subject, 0).toInt();

        QTime gesamtZeit(0, 0, 0);
        gesamtZeit = gesamtZeit.addMSecs(gesamtMs);

        ui->studie_total->setText(gesamtZeit.toString("hh:mm:ss"));
    }

void MainWindow::refreshSubjectBox()
    {
        ui->Subject_select->clear();

        QSettings settings("MeineApp", "Clock_v1");
        settings.beginGroup("Faecher");
        QStringList faecher = settings.childKeys();
        for (const QString &fach : faecher) {
            ui->Subject_select->addItem(fach);
        }
        settings.endGroup();
    }

//Buttons


void MainWindow::on_start_stop_button_clicked() //start stop button
{
    if(!stoppuhrLauft)
    {
        stoppuhrLauft = true;
        stoppuhrTimer->start(100);
    }
    else
    {
        stoppuhrTimer->stop();
        stoppuhrLauft = false;
    }
    animateButtonClick(ui->start_stop_button, QSize(256, 64), QSize(200, 50));
    applyAppThemes(currentTheme);
}

void MainWindow::on_reset_button_clicked() //reset button
{
    stoppuhrTimer->stop();
    stoppuhrLauft = false;
    stoppuhrZeit.setHMS(0, 0, 0, 0);
    ui->label_Stopuhr->setText("00:00:00.0");

    animateButtonClick(ui->reset_button, QSize(256, 64), QSize(200, 50));
    applyAppThemes(currentTheme);
}

//switch to Analog
void MainWindow::on_AnalogChange_clicked(bool checked)
{
    if(checked) {
        ui->clock_switch->setCurrentIndex(1);
        analogActive = true;
    }
    else if (!checked) {
        ui->clock_switch->setCurrentIndex(0);
        analogActive = false;
    }
    applyAppThemes(currentTheme);
}

//timer

void MainWindow::on_StartT_StopTbtn_clicked()
{
    if(TimerHour == 0 && TimerMinute == 0 && TimerSecond == 0){
        return;
    }

    if(!TimerActive)
    {
        TimerActive = true;
        countdownTimer->start(1000);
    }
    else
    {
        TimerActive = false;
        countdownTimer->stop();
    }
    animateButtonClick(ui->StartT_StopTbtn, QSize(256, 64), QSize(200, 50));
    applyAppThemes(currentTheme);
}

void MainWindow::on_resetTbtn_clicked()
{
    countdownTimer->stop();
    TimerActive = false;
    TimerHour = 0;
    TimerMinute = 0;
    TimerSecond = 0;
    updateTimer();
    animateButtonClick(ui->resetTbtn, QSize(256, 64), QSize(200, 50));
    applyAppThemes(currentTheme);

}


void MainWindow::on_hourUp_clicked(){
    if (TimerActive) return;
    if(TimerHour>=99)
    {
        TimerHour = 0;
    }
    else TimerHour++;
    animateButtonClick(ui->hourUp, QSize(32, 32), QSize(20, 20));
    updateTimer();
}

void MainWindow::on_hourDown_clicked(){
    if (TimerActive) return;
    if(TimerHour<=0)
    {
        TimerHour = 99;
    }
    else TimerHour--;
    animateButtonClick(ui->hourDown, QSize(32, 32), QSize(20, 20));
    updateTimer();
}

void MainWindow::on_minuteUp_clicked(){
    if (TimerActive) return;
    if(TimerMinute >=59)
    {
        TimerMinute = 0;
    }
    else TimerMinute++;
    animateButtonClick(ui->minuteUp, QSize(32, 32), QSize(20, 20));
    updateTimer();
}

void MainWindow::on_minuteDown_clicked(){
    if (TimerActive) return;
    if(TimerMinute <=0)
    {
        TimerMinute = 59;
    }
    else TimerMinute--;
    animateButtonClick(ui->minuteDown, QSize(32, 32), QSize(20, 20));
    updateTimer();
}

void MainWindow::on_secondUp_clicked(){
    if (TimerActive) return;
    if(TimerSecond>=59)
    {
        TimerSecond = 0;
    }
    else TimerSecond++;
    animateButtonClick(ui->secondUp, QSize(32, 32), QSize(20, 20));
    updateTimer();
}

void MainWindow::on_secondDown_clicked(){
    if (TimerActive) return;
    if(TimerSecond <=0)
    {
        TimerSecond = 59;
    }
    else TimerSecond--;
    animateButtonClick(ui->secondDown, QSize(32, 32), QSize(20, 20));
    updateTimer();
}

//timer
void MainWindow::on_coustom_shortcut_1_clicked()
{
    TimerSecond = 0;

    if(shortCut1 > 59){
        TimerHour = shortCut1 / 60;
        TimerMinute = shortCut1 %60;
    }
    else {
        TimerHour = 0;
        TimerMinute = shortCut1;
    }
    updateTimer();
    animateButtonGeometry(ui->coustom_shortcut_1);
}

void MainWindow::on_coustom_shortcut_2_clicked()
{
    TimerSecond = 0;

    if(shortCut2 > 59){
        TimerHour = shortCut2 / 60;
        TimerMinute = shortCut2 %60;
    }
    else {
        TimerHour = 0;
        TimerMinute = shortCut2;
    }
    updateTimer();
    animateButtonGeometry(ui->coustom_shortcut_2);
}

void MainWindow::on_coustom_shortcut_3_clicked()
{
    TimerSecond = 0;

    if(shortCut3 > 59){
        TimerHour = shortCut3 / 60;
        TimerMinute = shortCut3 %60;
    }
    else {
        TimerHour = 0;
        TimerMinute = shortCut3;
    }
    updateTimer();
    animateButtonGeometry(ui->coustom_shortcut_3);
}

void MainWindow::on_coustom_shortcut_4_clicked()
{
    TimerSecond = 0;

    if(shortCut4 > 59){
        TimerHour = shortCut4 / 60;
        TimerMinute = shortCut4 %60;
    }
    else {
        TimerHour = 0;
        TimerMinute = shortCut4;
    }
    updateTimer();
    animateButtonGeometry(ui->coustom_shortcut_4);
}

void MainWindow::on_coustom_shortcut_5_clicked()
{
    TimerSecond = 0;

    if(shortCut5 > 59){
        TimerHour = shortCut5 / 60;
        TimerMinute = shortCut5 %60;
    }
    else {
        TimerHour = 0;
        TimerMinute = shortCut5;
    }
    updateTimer();
    animateButtonGeometry(ui->coustom_shortcut_5);
}
//studie

void MainWindow::on_addSubject_clicked(){
    AddSubjectDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString newSubject = dialog.getSubjectName();

        if (!newSubject.isEmpty()) {
            ui->Subject_select->addItem(newSubject);
            ui->Subject_select->setCurrentText(newSubject);

            QSettings settings("MeineApp", "Clock_v1");
            settings.setValue("Faecher/" + newSubject, 0);

            qDebug() << "Add new subject succesfully:" << newSubject;
            ui->studie_time->setText("00:00:00");
            studieTime.setHMS(0, 0, 0, 0);
        }
    }
}

void MainWindow::on_start_stop_studie_clicked(){
    if(!studieRun)
    {
        studieRun = true;
        studieTimer->start(100);
    }
    else
    {
        // Timer anhalten
        studieTimer->stop();
        studieRun = false;

        // 1. GESAMTZEIT RUNDEN
        QString subject = ui->Subject_select->currentText();
        if (!subject.isEmpty()) {
            QSettings settings("MeineApp", "Clock_v1");
            int totalMs = settings.value("Faecher/" + subject, 0).toInt();

            int roundedMs = (totalMs / 1000) * 1000;
            settings.setValue("Faecher/" + subject, roundedMs);
            settings.sync();

            QTime gesamtZeit(0, 0, 0);
            gesamtZeit = gesamtZeit.addMSecs(roundedMs);
            ui->studie_total->setText(gesamtZeit.toString("hh:mm:ss"));
        }


        int sessionMs = studieTime.msecsSinceStartOfDay();
        int roundedSessionMs = (sessionMs / 1000) * 1000;

        studieTime.setHMS(0, 0, 0, 0);
        studieTime = studieTime.addMSecs(roundedSessionMs);
        ui->studie_time->setText(studieTime.toString("hh:mm:ss"));
    }

    animateButtonClick(ui->start_stop_studie, QSize(128, 32), QSize(100, 24));
    applyAppThemes(currentTheme);
}

void MainWindow::on_reset_studie_clicked(){
    studieTimer->stop();
    studieRun = false;

    studieTime.setHMS(0, 0, 0, 0);
    ui->studie_time->setText("00:00:00");

    QString subject = ui->Subject_select->currentText();
    if (!subject.isEmpty()) {
        QSettings settings("MeineApp", "Clock_v1");
        int totalMs = settings.value("Faecher/" + subject, 0).toInt();

        int roundedMs = (totalMs / 1000) * 1000;
        settings.setValue("Faecher/" + subject, roundedMs);
        settings.sync();

        QTime gesamtZeit(0, 0, 0);
        gesamtZeit = gesamtZeit.addMSecs(roundedMs);
        ui->studie_total->setText(gesamtZeit.toString("hh:mm:ss"));
    }

    animateButtonClick(ui->reset_studie, QSize(128, 32), QSize(100, 24));
    applyAppThemes(currentTheme);
}
//settings

//coustomize shortcut timer

//update Shortcuts
void MainWindow::updateTimerShortcuts(){
    QSettings settings("MeineApp", "Clock_v1");
    settings.setValue("Shortcut_1", shortCut1);
    ui->coustom_shortcut_1->setText(QString::number(shortCut1) + " min");
    ui->shortCut_one->setText(QString::number(shortCut1));

    settings.setValue("Shortcut_2", shortCut2);
    ui->coustom_shortcut_2->setText(QString::number(shortCut2) +  "min");
    ui->shortCut_two->setText(QString::number(shortCut2));

    settings.setValue("Shortcut_3", shortCut3);
    ui->coustom_shortcut_3->setText(QString::number(shortCut3) +  "min");
    ui->shortCut_three->setText(QString::number(shortCut3));

    settings.setValue("Shortcut_4", shortCut4);
    ui->coustom_shortcut_4->setText(QString::number(shortCut4) +  "min");
    ui->shortCut_four->setText(QString::number(shortCut4));

    settings.setValue("Shortcut_5", shortCut5);
    ui->coustom_shortcut_5->setText(QString::number(shortCut5) +  "min");
    ui->shortCut_five->setText(QString::number(shortCut5));

    settings.sync();
}

void MainWindow::on_shortCut_one_editingFinished(){
    bool ok;
    int wert = ui->shortCut_one->text().toInt(&ok);
    if(ok) {
        if(wert >999){
            wert = 999;
        }
        if(wert < 0){
            wert = 0;
        }
        shortCut1 = wert;
        updateTimerShortcuts();
    }
}

void MainWindow::on_shortCut_two_editingFinished(){
    bool ok;
    int wert = ui->shortCut_two->text().toInt(&ok);
    if(ok) {
        if(wert >999){
            wert = 999;
        }
        if(wert < 0){
            wert = 0;
        }
        shortCut2 = wert;
        updateTimerShortcuts();
    }
}

void MainWindow::on_shortCut_three_editingFinished(){
    bool ok;
    int wert = ui->shortCut_three->text().toInt(&ok);
    if(ok) {
        if(wert >999){
            wert = 999;
        }
        if(wert < 0){
            wert = 0;
        }
        shortCut3 = wert;
        updateTimerShortcuts();
    }
}

void MainWindow::on_shortCut_four_editingFinished(){
    bool ok;
    int wert = ui->shortCut_four->text().toInt(&ok);
    if(ok) {
        if(wert >999){
            wert = 999;
        }
        if(wert < 0){
            wert = 0;
        }
        shortCut4 = wert;
        updateTimerShortcuts();
    }
}

void MainWindow::on_shortCut_five_editingFinished(){
    bool ok;
    int wert = ui->shortCut_five->text().toInt(&ok);
    if(ok) {
        if(wert >999){
            wert = 999;
        }
        if(wert < 0){
            wert = 0;
        }
        shortCut5 = wert;
        updateTimerShortcuts();
    }
}

//General
//Darkmode
void MainWindow::on_Darkmode_checkStateChanged(const Qt::CheckState &arg1)
{
    bool isDark = (arg1 == Qt::CheckState::Checked);

    QSettings settings("MeineApp", "Clock_v1");
    settings.setValue("darkModeEnabled", isDark);
    settings.sync();


    if (arg1 == Qt::CheckState::Checked) {

        qApp->setStyle(QStyleFactory::create("Fusion"));

        QPalette darkPalette;
        darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::WindowText, Qt::white);
        darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
        darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
        darkPalette.setColor(QPalette::ToolTipText, Qt::white);
        darkPalette.setColor(QPalette::Text, Qt::white);
        darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::ButtonText, Qt::white);
        darkPalette.setColor(QPalette::BrightText, Qt::red);
        darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::HighlightedText, Qt::black);

        qApp->setPalette(darkPalette);
    } else {
        qApp->setPalette(qApp->style()->standardPalette());
    }
}

//Studie

void MainWindow::on_Edit_Studie_clicked(){
    ManageSubjectDialog dialog(this);

    animateButtonClick(ui->Edit_Studie, QSize(128,32), QSize(100, 24));
    ThemeData data = getThemeData(currentTheme);

    dialog.applyTheme(data.iconPrefix);

    dialog.exec();
    refreshSubjectBox();
}


