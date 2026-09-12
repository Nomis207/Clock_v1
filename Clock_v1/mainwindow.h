#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDateTime>
#include <QMainWindow>
#include <QTimer>
#include <QColor>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QLineEdit>
#include <QEvent>
#include <QSoundEffect>
#include <QSettings>

#include "addsubjectdialog.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

//AppThemes, add name if new
enum class AppThemes {
    Classic,
    Splatoon,
    Red,
    Green,
};

//theme datas
struct ThemeData {
    QString iconPrefix;
    QColor hourColor;
    QColor minuteColor;
    QColor secondColor;
    QColor outlineColor;
    QColor hourmarkColor;
    QColor minutemarkColor;
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    //Clock
    void aktualisiereUhr(); //update clock

    void on_AnalogChange_clicked(bool checked); //ClockStyles

    //stopwatch
    void aktualisiereStoppuhr();

    void on_start_stop_button_clicked();
    void on_reset_button_clicked();

    //studie
    void updateStudieClock();
    void on_Subject_select_currentTextChanged(const QString &arg1);

    //Timer
    void on_hourUp_clicked();
    void on_hourDown_clicked();

    void on_minuteUp_clicked();
    void on_minuteDown_clicked();

    void on_secondUp_clicked();
    void on_secondDown_clicked();

    void on_StartT_StopTbtn_clicked();
    void on_resetTbtn_clicked();

    void updateTimer();
    void tickCountdown();

    void on_hour_input_editingFinished();
    void on_minute_input_editingFinished();
    void on_second_input_editingFinished();


    void on_coustom_shortcut_1_clicked();
    void on_coustom_shortcut_2_clicked();
    void on_coustom_shortcut_3_clicked();
    void on_coustom_shortcut_4_clicked();
    void on_coustom_shortcut_5_clicked();

    void updateTimerShortcuts();


    //studie
    void on_addSubject_clicked();
    void on_start_stop_studie_clicked();
    void on_reset_studie_clicked();
    void refreshSubjectBox();

    //themes
    void on_Classic_Theme_clicked();
    void on_Splatoon_Theme_clicked();
    void on_Red_Theme_clicked();
    void on_Green_Theme_clicked();

    //settings

    //general
    void on_Darkmode_checkStateChanged(const Qt::CheckState &arg1);

    //timer
    void on_shortCut_one_editingFinished();
    void on_shortCut_two_editingFinished();
    void on_shortCut_three_editingFinished();
    void on_shortCut_four_editingFinished();
    void on_shortCut_five_editingFinished();

    //studie
    void on_Edit_Studie_clicked();






private:
    Ui::MainWindow *ui;

    //time
    QTimer *uhrTimer;

    //stopwatch
    QTimer *stoppuhrTimer;
    QTime stoppuhrZeit;
    bool stoppuhrLauft;

    //studie

    QTimer *studieTimer;
    QTime studieTime;
    bool studieRun;

    //analogbutton
    bool analogActive;

    //timer
    QTimer *countdownTimer;
    bool TimerActive;

    int TimerHour;
    int TimerMinute;
    int TimerSecond;

    QSoundEffect *alarmSound;

    int shortCut1;
    int shortCut2;
    int shortCut3;
    int shortCut4;
    int shortCut5;

    //themes
    ThemeData getThemeData(AppThemes theme);
    AppThemes currentTheme = AppThemes::Classic;
    void applyAppThemes(AppThemes theme);

    //animation
    void animateButtonClick(QPushButton *button, QSize normalSize, QSize pressedSize);
    void animateButtonGeometry(QWidget *widget);

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

};
#endif // MAINWINDOW_H
