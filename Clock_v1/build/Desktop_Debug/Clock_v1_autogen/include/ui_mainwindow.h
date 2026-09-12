/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "analogclock.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *Clock;
    QWidget *Uhr;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AnalogChange;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *clock_switch;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_time;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    AnalogClock *Analog_Clock;
    QWidget *StopUhr;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Stopuhr;
    QHBoxLayout *horizontalLayout;
    QPushButton *start_stop_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset_button;
    QSpacerItem *verticalSpacer;
    QWidget *Timer;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *second_input;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *secondUp;
    QPushButton *secondDown;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *hour_input;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *hourUp;
    QPushButton *hourDown;
    QLabel *DoublePoint_3;
    QSpacerItem *horizontalSpacer_13;
    QLabel *DoublePoint;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *minute_input;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *minuteUp;
    QPushButton *minuteDown;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *coustom_shortcut_1;
    QPushButton *coustom_shortcut_2;
    QPushButton *coustom_shortcut_3;
    QPushButton *coustom_shortcut_4;
    QPushButton *coustom_shortcut_5;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *StartT_StopTbtn;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *resetTbtn;
    QWidget *studie;
    QComboBox *Subject_select;
    QStackedWidget *Statistics;
    QWidget *page_3;
    QLabel *studie_time;
    QPushButton *reset_studie;
    QPushButton *start_stop_studie;
    QLabel *studie_total;
    QWidget *page_4;
    QPushButton *StatisticsSwitch;
    QPushButton *addSubject;
    QWidget *styles;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Classic_Theme;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Splatoon_Theme;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Red_Theme;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Green_Theme;
    QSpacerItem *verticalSpacer_2;
    QWidget *settings;
    QTabWidget *setting_Tab;
    QWidget *tab;
    QCheckBox *Darkmode;
    QWidget *tab_2;
    QLineEdit *shortCut_one;
    QLineEdit *shortCut_two;
    QLineEdit *shortCut_three;
    QLineEdit *shortCut_four;
    QLineEdit *shortCut_five;
    QLabel *EditTimerShortcuts;
    QWidget *tab_3;
    QPushButton *Edit_Studie;
    QMenuBar *menubar;
    QMenu *menuClock_V1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(811, 500);
        MainWindow->setMinimumSize(QSize(600, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        Clock = new QTabWidget(centralwidget);
        Clock->setObjectName("Clock");
        QFont font;
        font.setBold(false);
        Clock->setFont(font);
        Clock->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        Clock->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Clock->setAutoFillBackground(false);
        Clock->setTabPosition(QTabWidget::TabPosition::North);
        Clock->setTabShape(QTabWidget::TabShape::Rounded);
        Clock->setElideMode(Qt::TextElideMode::ElideNone);
        Uhr = new QWidget();
        Uhr->setObjectName("Uhr");
        verticalLayout_3 = new QVBoxLayout(Uhr);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        AnalogChange = new QPushButton(Uhr);
        AnalogChange->setObjectName("AnalogChange");
        AnalogChange->setMinimumSize(QSize(128, 32));
        AnalogChange->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/analogbtn.png);"));
        AnalogChange->setCheckable(true);

        horizontalLayout_2->addWidget(AnalogChange);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        clock_switch = new QStackedWidget(Uhr);
        clock_switch->setObjectName("clock_switch");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_time = new QLabel(page);
        label_time->setObjectName("label_time");
        QFont font1;
        font1.setPointSize(70);
        font1.setBold(false);
        label_time->setFont(font1);
        label_time->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_time);


        verticalLayout_4->addLayout(horizontalLayout_4);

        clock_switch->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        Analog_Clock = new AnalogClock(page_2);
        Analog_Clock->setObjectName("Analog_Clock");
        Analog_Clock->setMinimumSize(QSize(250, 250));

        horizontalLayout_5->addWidget(Analog_Clock);


        verticalLayout_5->addLayout(horizontalLayout_5);

        clock_switch->addWidget(page_2);

        horizontalLayout_3->addWidget(clock_switch);


        verticalLayout_3->addLayout(horizontalLayout_3);

        Clock->addTab(Uhr, QString());
        StopUhr = new QWidget();
        StopUhr->setObjectName("StopUhr");
        verticalLayout_2 = new QVBoxLayout(StopUhr);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_Stopuhr = new QLabel(StopUhr);
        label_Stopuhr->setObjectName("label_Stopuhr");
        QFont font2;
        font2.setPointSize(45);
        font2.setBold(false);
        label_Stopuhr->setFont(font2);
        label_Stopuhr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_Stopuhr->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_Stopuhr);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        start_stop_button = new QPushButton(StopUhr);
        start_stop_button->setObjectName("start_stop_button");
        start_stop_button->setMinimumSize(QSize(256, 64));
        start_stop_button->setAutoFillBackground(false);
        start_stop_button->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/startbtn.png);"));
        start_stop_button->setIconSize(QSize(256, 64));

        horizontalLayout->addWidget(start_stop_button);

        horizontalSpacer = new QSpacerItem(791, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reset_button = new QPushButton(StopUhr);
        reset_button->setObjectName("reset_button");
        reset_button->setMinimumSize(QSize(256, 64));
        reset_button->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/resetbtn.png);"));
        reset_button->setIconSize(QSize(256, 64));

        horizontalLayout->addWidget(reset_button);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        Clock->addTab(StopUhr, QString());
        Timer = new QWidget();
        Timer->setObjectName("Timer");
        verticalLayout_10 = new QVBoxLayout(Timer);
        verticalLayout_10->setObjectName("verticalLayout_10");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        second_input = new QLineEdit(Timer);
        second_input->setObjectName("second_input");
        second_input->setMinimumSize(QSize(80, 80));
        second_input->setMaximumSize(QSize(505, 500));
        QFont font3;
        font3.setPointSize(40);
        font3.setBold(false);
        second_input->setFont(font3);
        second_input->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(second_input);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        secondUp = new QPushButton(Timer);
        secondUp->setObjectName("secondUp");
        secondUp->setMinimumSize(QSize(32, 32));
        secondUp->setMaximumSize(QSize(32, 32));
        secondUp->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/up.png);"));

        horizontalLayout_8->addWidget(secondUp);

        secondDown = new QPushButton(Timer);
        secondDown->setObjectName("secondDown");
        secondDown->setMinimumSize(QSize(32, 32));
        secondDown->setMaximumSize(QSize(32, 32));
        secondDown->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/down.png);"));

        horizontalLayout_8->addWidget(secondDown);


        verticalLayout_9->addLayout(horizontalLayout_8);


        gridLayout_4->addLayout(verticalLayout_9, 0, 5, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        hour_input = new QLineEdit(Timer);
        hour_input->setObjectName("hour_input");
        hour_input->setMinimumSize(QSize(80, 80));
        hour_input->setMaximumSize(QSize(500, 500));
        hour_input->setFont(font3);
        hour_input->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(hour_input);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        hourUp = new QPushButton(Timer);
        hourUp->setObjectName("hourUp");
        hourUp->setEnabled(true);
        hourUp->setMinimumSize(QSize(32, 32));
        hourUp->setMaximumSize(QSize(32, 32));
        hourUp->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/up.png);"));

        horizontalLayout_10->addWidget(hourUp);

        hourDown = new QPushButton(Timer);
        hourDown->setObjectName("hourDown");
        hourDown->setMinimumSize(QSize(32, 32));
        hourDown->setMaximumSize(QSize(32, 32));
        hourDown->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/down.png);"));

        horizontalLayout_10->addWidget(hourDown);


        verticalLayout_7->addLayout(horizontalLayout_10);


        gridLayout_4->addLayout(verticalLayout_7, 0, 1, 1, 1);

        DoublePoint_3 = new QLabel(Timer);
        DoublePoint_3->setObjectName("DoublePoint_3");
        DoublePoint_3->setFont(font3);
        DoublePoint_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(DoublePoint_3, 0, 4, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_13, 0, 0, 1, 1);

        DoublePoint = new QLabel(Timer);
        DoublePoint->setObjectName("DoublePoint");
        DoublePoint->setFont(font3);
        DoublePoint->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        gridLayout_4->addWidget(DoublePoint, 0, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        minute_input = new QLineEdit(Timer);
        minute_input->setObjectName("minute_input");
        minute_input->setMinimumSize(QSize(80, 80));
        minute_input->setMaximumSize(QSize(500, 500));
        minute_input->setFont(font3);
        minute_input->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(minute_input);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        minuteUp = new QPushButton(Timer);
        minuteUp->setObjectName("minuteUp");
        minuteUp->setMinimumSize(QSize(32, 32));
        minuteUp->setMaximumSize(QSize(32, 32));
        minuteUp->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/up.png);"));

        horizontalLayout_9->addWidget(minuteUp);

        minuteDown = new QPushButton(Timer);
        minuteDown->setObjectName("minuteDown");
        minuteDown->setMinimumSize(QSize(32, 32));
        minuteDown->setMaximumSize(QSize(32, 32));
        minuteDown->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/down.png);"));

        horizontalLayout_9->addWidget(minuteDown);


        verticalLayout_8->addLayout(horizontalLayout_9);


        gridLayout_4->addLayout(verticalLayout_8, 0, 3, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_14, 0, 6, 1, 1);


        verticalLayout_10->addLayout(gridLayout_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        coustom_shortcut_1 = new QPushButton(Timer);
        coustom_shortcut_1->setObjectName("coustom_shortcut_1");
        coustom_shortcut_1->setMinimumSize(QSize(128, 32));
        coustom_shortcut_1->setMaximumSize(QSize(128, 32));
        coustom_shortcut_1->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));

        horizontalLayout_12->addWidget(coustom_shortcut_1);

        coustom_shortcut_2 = new QPushButton(Timer);
        coustom_shortcut_2->setObjectName("coustom_shortcut_2");
        coustom_shortcut_2->setMinimumSize(QSize(128, 32));
        coustom_shortcut_2->setMaximumSize(QSize(128, 32));
        coustom_shortcut_2->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));

        horizontalLayout_12->addWidget(coustom_shortcut_2);

        coustom_shortcut_3 = new QPushButton(Timer);
        coustom_shortcut_3->setObjectName("coustom_shortcut_3");
        coustom_shortcut_3->setMinimumSize(QSize(128, 32));
        coustom_shortcut_3->setMaximumSize(QSize(128, 32));
        coustom_shortcut_3->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));

        horizontalLayout_12->addWidget(coustom_shortcut_3);

        coustom_shortcut_4 = new QPushButton(Timer);
        coustom_shortcut_4->setObjectName("coustom_shortcut_4");
        coustom_shortcut_4->setMinimumSize(QSize(128, 32));
        coustom_shortcut_4->setMaximumSize(QSize(128, 32));
        coustom_shortcut_4->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));

        horizontalLayout_12->addWidget(coustom_shortcut_4);

        coustom_shortcut_5 = new QPushButton(Timer);
        coustom_shortcut_5->setObjectName("coustom_shortcut_5");
        coustom_shortcut_5->setMinimumSize(QSize(128, 32));
        coustom_shortcut_5->setMaximumSize(QSize(128, 32));
        coustom_shortcut_5->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);\n"
""));

        horizontalLayout_12->addWidget(coustom_shortcut_5);


        verticalLayout_10->addLayout(horizontalLayout_12);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        StartT_StopTbtn = new QPushButton(Timer);
        StartT_StopTbtn->setObjectName("StartT_StopTbtn");
        StartT_StopTbtn->setMinimumSize(QSize(256, 64));
        StartT_StopTbtn->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/startbtn.png);"));

        horizontalLayout_7->addWidget(StartT_StopTbtn);

        horizontalSpacer_6 = new QSpacerItem(208, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        resetTbtn = new QPushButton(Timer);
        resetTbtn->setObjectName("resetTbtn");
        resetTbtn->setMinimumSize(QSize(256, 64));
        resetTbtn->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/resetbtn.png);"));

        horizontalLayout_7->addWidget(resetTbtn);


        verticalLayout_10->addLayout(horizontalLayout_7);

        Clock->addTab(Timer, QString());
        studie = new QWidget();
        studie->setObjectName("studie");
        Subject_select = new QComboBox(studie);
        Subject_select->setObjectName("Subject_select");
        Subject_select->setGeometry(QRect(10, 30, 211, 41));
        Statistics = new QStackedWidget(studie);
        Statistics->setObjectName("Statistics");
        Statistics->setGeometry(QRect(240, 80, 511, 291));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        studie_time = new QLabel(page_3);
        studie_time->setObjectName("studie_time");
        studie_time->setGeometry(QRect(10, 50, 511, 111));
        studie_time->setFont(font2);
        studie_time->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        studie_time->setAlignment(Qt::AlignmentFlag::AlignCenter);
        reset_studie = new QPushButton(page_3);
        reset_studie->setObjectName("reset_studie");
        reset_studie->setGeometry(QRect(370, 260, 131, 32));
        reset_studie->setMinimumSize(QSize(128, 32));
        reset_studie->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/resetbtn.png);"));
        reset_studie->setIconSize(QSize(256, 64));
        start_stop_studie = new QPushButton(page_3);
        start_stop_studie->setObjectName("start_stop_studie");
        start_stop_studie->setGeometry(QRect(60, 260, 128, 32));
        start_stop_studie->setMinimumSize(QSize(128, 32));
        start_stop_studie->setAutoFillBackground(false);
        start_stop_studie->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/startbtn.png);"));
        start_stop_studie->setIconSize(QSize(256, 64));
        studie_total = new QLabel(page_3);
        studie_total->setObjectName("studie_total");
        studie_total->setGeometry(QRect(60, 200, 161, 19));
        Statistics->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        Statistics->addWidget(page_4);
        StatisticsSwitch = new QPushButton(studie);
        StatisticsSwitch->setObjectName("StatisticsSwitch");
        StatisticsSwitch->setGeometry(QRect(270, 30, 128, 32));
        StatisticsSwitch->setMinimumSize(QSize(128, 32));
        StatisticsSwitch->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/statistic.png);"));
        addSubject = new QPushButton(studie);
        addSubject->setObjectName("addSubject");
        addSubject->setGeometry(QRect(740, 10, 32, 32));
        addSubject->setMinimumSize(QSize(32, 32));
        addSubject->setMaximumSize(QSize(32, 32));
        addSubject->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/add.png);"));
        Clock->addTab(studie, QString());
        styles = new QWidget();
        styles->setObjectName("styles");
        verticalLayout_6 = new QVBoxLayout(styles);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        Classic_Theme = new QPushButton(styles);
        Classic_Theme->setObjectName("Classic_Theme");
        Classic_Theme->setMinimumSize(QSize(128, 32));
        Classic_Theme->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/ClassicTheme.png);"));
        Classic_Theme->setIconSize(QSize(256, 64));

        horizontalLayout_6->addWidget(Classic_Theme);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        Splatoon_Theme = new QPushButton(styles);
        Splatoon_Theme->setObjectName("Splatoon_Theme");
        Splatoon_Theme->setMinimumSize(QSize(128, 32));
        Splatoon_Theme->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/splatoon/Themes/Splatoon/SplatoonTheme.png);\n"
""));
        Splatoon_Theme->setIconSize(QSize(256, 64));

        horizontalLayout_6->addWidget(Splatoon_Theme);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        Red_Theme = new QPushButton(styles);
        Red_Theme->setObjectName("Red_Theme");
        Red_Theme->setMinimumSize(QSize(128, 32));
        Red_Theme->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/red/Themes/Red/Red_Theme.png);"));

        horizontalLayout_6->addWidget(Red_Theme);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        Green_Theme = new QPushButton(styles);
        Green_Theme->setObjectName("Green_Theme");
        Green_Theme->setMinimumSize(QSize(128, 32));
        Green_Theme->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/green/Themes/Green/Green_Theme.png);"));

        horizontalLayout_6->addWidget(Green_Theme);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 303, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        Clock->addTab(styles, QString());
        settings = new QWidget();
        settings->setObjectName("settings");
        setting_Tab = new QTabWidget(settings);
        setting_Tab->setObjectName("setting_Tab");
        setting_Tab->setGeometry(QRect(10, 10, 751, 361));
        setting_Tab->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        setting_Tab->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        setting_Tab->setTabPosition(QTabWidget::TabPosition::West);
        tab = new QWidget();
        tab->setObjectName("tab");
        Darkmode = new QCheckBox(tab);
        Darkmode->setObjectName("Darkmode");
        Darkmode->setGeometry(QRect(40, 20, 96, 24));
        Darkmode->setChecked(false);
        Darkmode->setTristate(false);
        setting_Tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        shortCut_one = new QLineEdit(tab_2);
        shortCut_one->setObjectName("shortCut_one");
        shortCut_one->setGeometry(QRect(30, 120, 113, 27));
        shortCut_one->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));
        shortCut_one->setMaxLength(2);
        shortCut_one->setAlignment(Qt::AlignmentFlag::AlignCenter);
        shortCut_one->setClearButtonEnabled(false);
        shortCut_two = new QLineEdit(tab_2);
        shortCut_two->setObjectName("shortCut_two");
        shortCut_two->setGeometry(QRect(160, 120, 113, 27));
        shortCut_two->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));
        shortCut_two->setAlignment(Qt::AlignmentFlag::AlignCenter);
        shortCut_three = new QLineEdit(tab_2);
        shortCut_three->setObjectName("shortCut_three");
        shortCut_three->setGeometry(QRect(300, 120, 113, 27));
        shortCut_three->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));
        shortCut_three->setAlignment(Qt::AlignmentFlag::AlignCenter);
        shortCut_four = new QLineEdit(tab_2);
        shortCut_four->setObjectName("shortCut_four");
        shortCut_four->setGeometry(QRect(440, 120, 113, 27));
        shortCut_four->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));
        shortCut_four->setAlignment(Qt::AlignmentFlag::AlignCenter);
        shortCut_five = new QLineEdit(tab_2);
        shortCut_five->setObjectName("shortCut_five");
        shortCut_five->setGeometry(QRect(580, 120, 113, 27));
        shortCut_five->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/frame.png);"));
        shortCut_five->setAlignment(Qt::AlignmentFlag::AlignCenter);
        EditTimerShortcuts = new QLabel(tab_2);
        EditTimerShortcuts->setObjectName("EditTimerShortcuts");
        EditTimerShortcuts->setGeometry(QRect(40, 40, 321, 31));
        setting_Tab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        Edit_Studie = new QPushButton(tab_3);
        Edit_Studie->setObjectName("Edit_Studie");
        Edit_Studie->setGeometry(QRect(60, 40, 128, 32));
        Edit_Studie->setMinimumSize(QSize(128, 32));
        Edit_Studie->setMaximumSize(QSize(128, 32));
        Edit_Studie->setStyleSheet(QString::fromUtf8("border-image: url(:/themes/classic/Themes/classic/edit.png);"));
        setting_Tab->addTab(tab_3, QString());
        Clock->addTab(settings, QString());

        verticalLayout->addWidget(Clock);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 811, 24));
        menuClock_V1 = new QMenu(menubar);
        menuClock_V1->setObjectName("menuClock_V1");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuClock_V1->menuAction());

        retranslateUi(MainWindow);

        Clock->setCurrentIndex(2);
        clock_switch->setCurrentIndex(0);
        Statistics->setCurrentIndex(0);
        setting_Tab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AnalogChange->setText(QString());
        label_time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        Clock->setTabText(Clock->indexOf(Uhr), QCoreApplication::translate("MainWindow", "Uhr", nullptr));
        label_Stopuhr->setText(QCoreApplication::translate("MainWindow", "00:00:00:00", nullptr));
        start_stop_button->setText(QString());
        reset_button->setText(QString());
        Clock->setTabText(Clock->indexOf(StopUhr), QCoreApplication::translate("MainWindow", "StopUhr", nullptr));
        second_input->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        secondUp->setText(QString());
        secondDown->setText(QString());
        hour_input->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        hourUp->setText(QString());
        hourDown->setText(QString());
        DoublePoint_3->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        DoublePoint->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        minute_input->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        minuteUp->setText(QString());
        minuteDown->setText(QString());
        coustom_shortcut_1->setText(QCoreApplication::translate("MainWindow", "1 Min", nullptr));
        coustom_shortcut_2->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        coustom_shortcut_3->setText(QCoreApplication::translate("MainWindow", "10 min", nullptr));
        coustom_shortcut_4->setText(QCoreApplication::translate("MainWindow", "30 min", nullptr));
        coustom_shortcut_5->setText(QCoreApplication::translate("MainWindow", "60 min", nullptr));
        StartT_StopTbtn->setText(QString());
        resetTbtn->setText(QString());
        Clock->setTabText(Clock->indexOf(Timer), QCoreApplication::translate("MainWindow", "Timer", nullptr));
        Subject_select->setCurrentText(QString());
        studie_time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        reset_studie->setText(QString());
        start_stop_studie->setText(QString());
        studie_total->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        StatisticsSwitch->setText(QString());
        addSubject->setText(QString());
        Clock->setTabText(Clock->indexOf(studie), QCoreApplication::translate("MainWindow", "Studie", nullptr));
        Classic_Theme->setText(QString());
        Splatoon_Theme->setText(QString());
        Red_Theme->setText(QString());
        Green_Theme->setText(QString());
        Clock->setTabText(Clock->indexOf(styles), QCoreApplication::translate("MainWindow", "Styles", nullptr));
        Darkmode->setText(QCoreApplication::translate("MainWindow", "Darkmode", nullptr));
        setting_Tab->setTabText(setting_Tab->indexOf(tab), QCoreApplication::translate("MainWindow", "General", nullptr));
        shortCut_one->setText(QCoreApplication::translate("MainWindow", "Sh", nullptr));
        shortCut_two->setText(QCoreApplication::translate("MainWindow", "ShortCut 2", nullptr));
        shortCut_three->setText(QCoreApplication::translate("MainWindow", "ShortCut 3", nullptr));
        shortCut_four->setInputMask(QString());
        shortCut_four->setText(QCoreApplication::translate("MainWindow", "ShortCut 4", nullptr));
        shortCut_five->setText(QCoreApplication::translate("MainWindow", "ShortCut 5", nullptr));
        EditTimerShortcuts->setText(QCoreApplication::translate("MainWindow", "EditTimerShortcuts pls enter in Minutes", nullptr));
        setting_Tab->setTabText(setting_Tab->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Timer", nullptr));
        Edit_Studie->setText(QString());
        setting_Tab->setTabText(setting_Tab->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Studie", nullptr));
        Clock->setTabText(Clock->indexOf(settings), QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuClock_V1->setTitle(QCoreApplication::translate("MainWindow", "Clock_V1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
