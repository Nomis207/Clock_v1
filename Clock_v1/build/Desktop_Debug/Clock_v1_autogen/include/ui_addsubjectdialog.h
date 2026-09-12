/********************************************************************************
** Form generated from reading UI file 'addsubjectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUBJECTDIALOG_H
#define UI_ADDSUBJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSubjectDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLineEdit *subject_Input;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelbtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *finishbtn;

    void setupUi(QDialog *AddSubjectDialog)
    {
        if (AddSubjectDialog->objectName().isEmpty())
            AddSubjectDialog->setObjectName("AddSubjectDialog");
        AddSubjectDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AddSubjectDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddSubjectDialog);
        label->setObjectName("label");
        label->setMaximumSize(QSize(512, 64));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        subject_Input = new QLineEdit(AddSubjectDialog);
        subject_Input->setObjectName("subject_Input");
        QFont font1;
        font1.setPointSize(15);
        subject_Input->setFont(font1);

        verticalLayout->addWidget(subject_Input);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 112, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cancelbtn = new QPushButton(AddSubjectDialog);
        cancelbtn->setObjectName("cancelbtn");
        cancelbtn->setMinimumSize(QSize(128, 32));
        cancelbtn->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/cancel.png);"));

        horizontalLayout_2->addWidget(cancelbtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        finishbtn = new QPushButton(AddSubjectDialog);
        finishbtn->setObjectName("finishbtn");
        finishbtn->setMinimumSize(QSize(128, 32));
        finishbtn->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/finish.png);"));

        horizontalLayout_2->addWidget(finishbtn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(AddSubjectDialog);

        finishbtn->setDefault(true);


        QMetaObject::connectSlotsByName(AddSubjectDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSubjectDialog)
    {
        AddSubjectDialog->setWindowTitle(QCoreApplication::translate("AddSubjectDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddSubjectDialog", "Enter new subject", nullptr));
        cancelbtn->setText(QString());
        finishbtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddSubjectDialog: public Ui_AddSubjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUBJECTDIALOG_H
