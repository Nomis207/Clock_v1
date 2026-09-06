#include "addsubjectdialog.h"
#include "ui_addsubjectdialog.h"

AddSubjectDialog::AddSubjectDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddSubjectDialog)
{
    ui->setupUi(this);
    setWindowTitle("Neues Fach hinzufügen");
    connect(ui->finishbtn, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->cancelbtn, &QPushButton::clicked, this, &QDialog::reject);
}

AddSubjectDialog::~AddSubjectDialog()
{
    delete ui;
}

QString AddSubjectDialog::getSubjectName() const
{
    if (ui && ui->subject_Input) {
        return ui->subject_Input->text().trimmed();
    }
    return QString();
}