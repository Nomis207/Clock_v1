#ifndef ADDSUBJECTDIALOG_H
#define ADDSUBJECTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class AddSubjectDialog;
}
QT_END_NAMESPACE

class AddSubjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddSubjectDialog(QWidget *parent = nullptr);
    ~AddSubjectDialog() override;

    QString getSubjectName() const;

private:
    Ui::AddSubjectDialog *ui;
};

#endif // ADDSUBJECTDIALOG_H