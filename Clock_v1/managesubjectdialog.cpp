#include "managesubjectdialog.h"
#include "ui_managesubjectdialog.h"
#include "addsubjectdialog.h"

#include <QSettings>
#include <QTime>

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

    refreshList();
}

void ManageSubjectDialog::on_addSubject_clicked()
{
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






