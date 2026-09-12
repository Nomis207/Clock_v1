/********************************************************************************
** Form generated from reading UI file 'managesubjectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
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
        subjectList->setStyleSheet(QString::fromUtf8(""));
        resetStudieTotal = new QPushButton(ManageSubjectDialog);
        resetStudieTotal->setObjectName("resetStudieTotal");
        resetStudieTotal->setGeometry(QRect(50, 280, 128, 32));
        resetStudieTotal->setMinimumSize(QSize(128, 32));
        resetStudieTotal->setMaximumSize(QSize(128, 32));
        resetStudieTotal->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/resetbtn.png);"));
        deletSubject = new QPushButton(ManageSubjectDialog);
        deletSubject->setObjectName("deletSubject");
        deletSubject->setGeometry(QRect(240, 280, 128, 32));
        deletSubject->setMinimumSize(QSize(128, 32));
        deletSubject->setMaximumSize(QSize(128, 32));
        deletSubject->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/delete.png);"));
        addSubject = new QPushButton(ManageSubjectDialog);
        addSubject->setObjectName("addSubject");
        addSubject->setGeometry(QRect(480, 280, 32, 32));
        addSubject->setMinimumSize(QSize(32, 32));
        addSubject->setMaximumSize(QSize(32, 32));
        addSubject->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/add.png);"));
        close_studie = new QPushButton(ManageSubjectDialog);
        close_studie->setObjectName("close_studie");
        close_studie->setGeometry(QRect(420, 20, 128, 32));
        close_studie->setMinimumSize(QSize(128, 32));
        close_studie->setMaximumSize(QSize(128, 32));
        close_studie->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/close.png);"));

        retranslateUi(ManageSubjectDialog);

        QMetaObject::connectSlotsByName(ManageSubjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageSubjectDialog)
    {
        ManageSubjectDialog->setWindowTitle(QCoreApplication::translate("ManageSubjectDialog", "Dialog", nullptr));
        resetStudieTotal->setText(QString());
        deletSubject->setText(QString());
        addSubject->setText(QString());
        close_studie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManageSubjectDialog: public Ui_ManageSubjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESUBJECTDIALOG_H
