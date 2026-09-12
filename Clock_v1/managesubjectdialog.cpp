#include "managesubjectdialog.h"
#include "ui_managesubjectdialog.h"
#include "addsubjectdialog.h"

#include <QSettings>
#include <QTime>
#include <QPropertyAnimation>

ManageSubjectDialog::ManageSubjectDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ManageSubjectDialog)
{
    ui->setupUi(this);
    refreshList();
}

ManageSubjectDialog::~ManageSubjectDialog()
{
    delete ui;
}

//button
void ManageSubjectDialog::on_close_studie_clicked()
{
    animateButtonClick(ui->close_studie, QSize(128,32), QSize(100, 24));
    this->close();
}


void ManageSubjectDialog::on_resetStudieTotal_clicked()
{
    QListWidgetItem *currentItem = ui->subjectList->currentItem();
    if (!currentItem) return;

    QString onlyText = currentItem->text();
    QString subjectName = onlyText.split(" - ").first();

    QSettings settings("MeineApp", "Clock_v1");
    settings.setValue("Faecher/" + subjectName, 0);

    animateButtonClick(ui->resetStudieTotal, QSize(128,32), QSize(100, 24));
    refreshList();
}


void ManageSubjectDialog::on_deletSubject_clicked()
{
    QListWidgetItem *currentItem = ui->subjectList->currentItem();
    if (!currentItem) return;

    QString onlyText = currentItem->text();
    QString subjectName = onlyText.split(" - ").first();

    QSettings settings("MeineApp", "Clock_v1");
    settings.remove("Faecher/" + subjectName);

    animateButtonClick(ui->deletSubject, QSize(128,32), QSize(100, 24));
    refreshList();
}

void ManageSubjectDialog::on_addSubject_clicked()
{
    animateButtonClick(ui->addSubject, QSize(32,32), QSize(20, 20));
    AddSubjectDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString newSubject = dialog.getSubjectName();

        if (!newSubject.isEmpty()) {
            QSettings settings("MeineApp", "Clock_v1");
            settings.setValue("Faecher/" + newSubject, 0);

            refreshList();
        }
    }
}

void ManageSubjectDialog::refreshList(){
    ui->subjectList->clear();

    QSettings settings("MeineApp", "Clock_v1");
    settings.beginGroup("Faecher");
    QStringList faecher = settings.childKeys();

    for (const QString &fach : faecher) {
        int gesamtMs = settings.value(fach, 0).toInt();
        QTime gesamtZeit(0, 0, 0);
        gesamtZeit = gesamtZeit.addMSecs(gesamtMs);

        QString eintragText = fach + " - " + gesamtZeit.toString("hh:mm:ss");
        ui->subjectList->addItem(eintragText);
    }

    settings.endGroup();
}

void ManageSubjectDialog::applyTheme(QString themePath){

    QString fullClosePath     = themePath + "close.png";
    QString fullDeletePath    = themePath + "delete.png";
    QString fullResetPath     = themePath + "resetbtn.png";
    QString fullAddPath       = themePath + "add.png";

    //close
    ui->close_studie->setIcon(QIcon(fullClosePath));
    ui->close_studie->setIconSize(QSize(128,32));

    //delete
    ui->deletSubject->setIcon(QIcon(fullDeletePath));
    ui->deletSubject->setIconSize(QSize(128,32));

    //reset
    ui->resetStudieTotal->setIcon(QIcon(fullResetPath));
    ui->resetStudieTotal->setIconSize(QSize(128,32));

    //add
    ui->addSubject->setIcon(QIcon(fullAddPath));
    ui->addSubject->setIconSize(QSize(32,32));

    //transparentStyle
    QString transparentstyle = "border: none; background: transparent;";

    ui->close_studie->setStyleSheet(transparentstyle);
    ui->deletSubject->setStyleSheet(transparentstyle);
    ui->resetStudieTotal->setStyleSheet(transparentstyle);
}

//animation
void ManageSubjectDialog::animateButtonClick(QPushButton *button, QSize normalSize, QSize pressedSize){
    QPropertyAnimation *animation = new QPropertyAnimation(button, "iconSize");
    animation->setDuration(150);
    animation->setKeyValueAt(0, normalSize);
    animation->setKeyValueAt(0.5, pressedSize);
    animation->setKeyValueAt(1, normalSize);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}





