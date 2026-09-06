#ifndef MANAGESUBJECTDIALOG_H
#define MANAGESUBJECTDIALOG_H

#include <QDialog>

namespace Ui {
class ManageSubjectDialog;
}

class ManageSubjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ManageSubjectDialog(QWidget *parent = nullptr);
    ~ManageSubjectDialog();

private slots:
    void on_close_studie_clicked();

    void on_resetStudieTotal_clicked();

    void on_deletSubject_clicked();

    void on_addSubject_clicked();

    void refreshList();

private:
    Ui::ManageSubjectDialog *ui;
};

#endif // MANAGESUBJECTDIALOG_H
