/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "aktualisiereUhr",
        "",
        "on_AnalogChange_clicked",
        "checked",
        "aktualisiereStoppuhr",
        "on_start_stop_button_clicked",
        "on_reset_button_clicked",
        "updateStudieClock",
        "on_Subject_select_currentTextChanged",
        "arg1",
        "on_hourUp_clicked",
        "on_hourDown_clicked",
        "on_minuteUp_clicked",
        "on_minuteDown_clicked",
        "on_secondUp_clicked",
        "on_secondDown_clicked",
        "on_StartT_StopTbtn_clicked",
        "on_resetTbtn_clicked",
        "updateTimer",
        "tickCountdown",
        "on_hour_input_editingFinished",
        "on_minute_input_editingFinished",
        "on_second_input_editingFinished",
        "on_coustom_shortcut_1_clicked",
        "on_coustom_shortcut_2_clicked",
        "on_coustom_shortcut_3_clicked",
        "on_coustom_shortcut_4_clicked",
        "on_coustom_shortcut_5_clicked",
        "updateTimerShortcuts",
        "on_addSubject_clicked",
        "on_start_stop_studie_clicked",
        "on_reset_studie_clicked",
        "refreshSubjectBox",
        "on_Classic_Theme_clicked",
        "on_Splatoon_Theme_clicked",
        "on_Red_Theme_clicked",
        "on_Green_Theme_clicked",
        "on_Darkmode_checkStateChanged",
        "Qt::CheckState",
        "on_shortCut_one_editingFinished",
        "on_shortCut_two_editingFinished",
        "on_shortCut_three_editingFinished",
        "on_shortCut_four_editingFinished",
        "on_shortCut_five_editingFinished",
        "on_Edit_Studie_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'aktualisiereUhr'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_AnalogChange_clicked'
        QtMocHelpers::SlotData<void(bool)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'aktualisiereStoppuhr'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_start_stop_button_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_reset_button_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateStudieClock'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Subject_select_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'on_hourUp_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hourDown_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_minuteUp_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_minuteDown_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_secondUp_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_secondDown_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_StartT_StopTbtn_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_resetTbtn_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTimer'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tickCountdown'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hour_input_editingFinished'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_minute_input_editingFinished'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_second_input_editingFinished'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_coustom_shortcut_1_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_coustom_shortcut_2_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_coustom_shortcut_3_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_coustom_shortcut_4_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_coustom_shortcut_5_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTimerShortcuts'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addSubject_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_start_stop_studie_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_reset_studie_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'refreshSubjectBox'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Classic_Theme_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Splatoon_Theme_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Red_Theme_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Green_Theme_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Darkmode_checkStateChanged'
        QtMocHelpers::SlotData<void(const Qt::CheckState &)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 39, 10 },
        }}),
        // Slot 'on_shortCut_one_editingFinished'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_shortCut_two_editingFinished'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_shortCut_three_editingFinished'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_shortCut_four_editingFinished'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_shortCut_five_editingFinished'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Edit_Studie_clicked'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aktualisiereUhr(); break;
        case 1: _t->on_AnalogChange_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->aktualisiereStoppuhr(); break;
        case 3: _t->on_start_stop_button_clicked(); break;
        case 4: _t->on_reset_button_clicked(); break;
        case 5: _t->updateStudieClock(); break;
        case 6: _t->on_Subject_select_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_hourUp_clicked(); break;
        case 8: _t->on_hourDown_clicked(); break;
        case 9: _t->on_minuteUp_clicked(); break;
        case 10: _t->on_minuteDown_clicked(); break;
        case 11: _t->on_secondUp_clicked(); break;
        case 12: _t->on_secondDown_clicked(); break;
        case 13: _t->on_StartT_StopTbtn_clicked(); break;
        case 14: _t->on_resetTbtn_clicked(); break;
        case 15: _t->updateTimer(); break;
        case 16: _t->tickCountdown(); break;
        case 17: _t->on_hour_input_editingFinished(); break;
        case 18: _t->on_minute_input_editingFinished(); break;
        case 19: _t->on_second_input_editingFinished(); break;
        case 20: _t->on_coustom_shortcut_1_clicked(); break;
        case 21: _t->on_coustom_shortcut_2_clicked(); break;
        case 22: _t->on_coustom_shortcut_3_clicked(); break;
        case 23: _t->on_coustom_shortcut_4_clicked(); break;
        case 24: _t->on_coustom_shortcut_5_clicked(); break;
        case 25: _t->updateTimerShortcuts(); break;
        case 26: _t->on_addSubject_clicked(); break;
        case 27: _t->on_start_stop_studie_clicked(); break;
        case 28: _t->on_reset_studie_clicked(); break;
        case 29: _t->refreshSubjectBox(); break;
        case 30: _t->on_Classic_Theme_clicked(); break;
        case 31: _t->on_Splatoon_Theme_clicked(); break;
        case 32: _t->on_Red_Theme_clicked(); break;
        case 33: _t->on_Green_Theme_clicked(); break;
        case 34: _t->on_Darkmode_checkStateChanged((*reinterpret_cast<std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 35: _t->on_shortCut_one_editingFinished(); break;
        case 36: _t->on_shortCut_two_editingFinished(); break;
        case 37: _t->on_shortCut_three_editingFinished(); break;
        case 38: _t->on_shortCut_four_editingFinished(); break;
        case 39: _t->on_shortCut_five_editingFinished(); break;
        case 40: _t->on_Edit_Studie_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
