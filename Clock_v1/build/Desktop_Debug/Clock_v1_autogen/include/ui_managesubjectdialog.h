/********************************************************************************
** Form generated from reading UI file 'managesubjectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGESUBJECTDIALOG_H
#define UI_MANAGESUBJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManageSubjectDialog
{
public:
    QListWidget *subjectList;
    QPushButton *resetStudieTotal;
    QPushButton *deletSubject;
    QPushButton *addSubject;
    QPushButton *close_studie;

    void setupUi(QDialog *ManageSubjectDialog)
    {
        if (ManageSubjectDialog->objectName().isEmpty())
            ManageSubjectDialog->setObjectName("ManageSubjectDialog");
        ManageSubjectDialog->resize(571, 383);
        subjectList = new QListWidget(ManageSubjectDialog);
        subjectList->setObjectName("subjectList");
        subjectList->setGeometry(QRect(20, 40, 256, 192));
        resetStudieTotal = new QPushButton(ManageSubjectDialog);
        resetStudieTotal->setObjectName("resetStudieTotal");
        resetStudieTotal->setGeometry(QRect(50, 280, 96, 27));
        deletSubject = new QPushButton(ManageSubjectDialog);
        deletSubject->setObjectName("deletSubject");
        deletSubject->setGeometry(QRect(240, 280, 96, 27));
        addSubject = new QPushButton(ManageSubjectDialog);
        addSubject->setObjectName("addSubject");
        addSubject->setGeometry(QRect(420, 280, 96, 27));
        close_studie = new QPushButton(ManageSubjectDialog);
        close_studie->setObjectName("close_studie");
        close_studie->setGeometry(QRect(460, 10, 96, 27));

        retranslateUi(ManageSubjectDialog);

        QMetaObject::connectSlotsByName(ManageSubjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageSubjectDialog)
    {
        ManageSubjectDialog->setWindowTitle(QCoreApplication::translate("ManageSubjectDialog", "Dialog", nullptr));
        resetStudieTotal->setText(QCoreApplication::translate("ManageSubjectDialog", "resetTotal", nullptr));
        deletSubject->setText(QCoreApplication::translate("ManageSubjectDialog", "delete", nullptr));
        addSubject->setText(QCoreApplication::translate("ManageSubjectDialog", "+", nullptr));
        close_studie->setText(QCoreApplication::translate("ManageSubjectDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageSubjectDialog: public Ui_ManageSubjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESUBJECTDIALOG_H
