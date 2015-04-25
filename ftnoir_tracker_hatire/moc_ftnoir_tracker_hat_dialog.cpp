/****************************************************************************
** Meta object code from reading C++ file 'ftnoir_tracker_hat_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ftnoir_tracker_hatire/ftnoir_tracker_hat_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftnoir_tracker_hat_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrackerControls_t {
    QByteArrayData data[50];
    char stringdata[596];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackerControls_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackerControls_t qt_meta_stringdata_TrackerControls = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TrackerControls"
QT_MOC_LITERAL(1, 16, 12), // "WriteMsgInfo"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "MsgInfo"
QT_MOC_LITERAL(4, 38, 12), // "set_mod_port"
QT_MOC_LITERAL(5, 51, 3), // "val"
QT_MOC_LITERAL(6, 55, 12), // "set_ena_roll"
QT_MOC_LITERAL(7, 68, 13), // "set_ena_pitch"
QT_MOC_LITERAL(8, 82, 11), // "set_ena_yaw"
QT_MOC_LITERAL(9, 94, 9), // "set_ena_x"
QT_MOC_LITERAL(10, 104, 9), // "set_ena_y"
QT_MOC_LITERAL(11, 114, 9), // "set_ena_z"
QT_MOC_LITERAL(12, 124, 12), // "set_inv_roll"
QT_MOC_LITERAL(13, 137, 13), // "set_inv_pitch"
QT_MOC_LITERAL(14, 151, 11), // "set_inv_yaw"
QT_MOC_LITERAL(15, 163, 9), // "set_inv_x"
QT_MOC_LITERAL(16, 173, 9), // "set_inv_y"
QT_MOC_LITERAL(17, 183, 9), // "set_inv_z"
QT_MOC_LITERAL(18, 193, 12), // "set_rot_roll"
QT_MOC_LITERAL(19, 206, 13), // "set_rot_pitch"
QT_MOC_LITERAL(20, 220, 11), // "set_rot_yaw"
QT_MOC_LITERAL(21, 232, 9), // "set_acc_x"
QT_MOC_LITERAL(22, 242, 9), // "set_acc_y"
QT_MOC_LITERAL(23, 252, 9), // "set_acc_z"
QT_MOC_LITERAL(24, 262, 13), // "set_cmd_start"
QT_MOC_LITERAL(25, 276, 12), // "set_cmd_stop"
QT_MOC_LITERAL(26, 289, 12), // "set_cmd_init"
QT_MOC_LITERAL(27, 302, 13), // "set_cmd_reset"
QT_MOC_LITERAL(28, 316, 14), // "set_cmd_center"
QT_MOC_LITERAL(29, 331, 12), // "set_cmd_zero"
QT_MOC_LITERAL(30, 344, 13), // "set_DelayInit"
QT_MOC_LITERAL(31, 358, 14), // "set_DelayStart"
QT_MOC_LITERAL(32, 373, 12), // "set_DelaySeq"
QT_MOC_LITERAL(33, 386, 10), // "set_endian"
QT_MOC_LITERAL(34, 397, 7), // "set_Fps"
QT_MOC_LITERAL(35, 405, 12), // "set_mod_baud"
QT_MOC_LITERAL(36, 418, 16), // "set_mod_dataBits"
QT_MOC_LITERAL(37, 435, 14), // "set_mod_parity"
QT_MOC_LITERAL(38, 450, 16), // "set_mod_stopBits"
QT_MOC_LITERAL(39, 467, 19), // "set_mod_flowControl"
QT_MOC_LITERAL(40, 487, 4), // "doOK"
QT_MOC_LITERAL(41, 492, 8), // "doCancel"
QT_MOC_LITERAL(42, 501, 6), // "doSave"
QT_MOC_LITERAL(43, 508, 7), // "doReset"
QT_MOC_LITERAL(44, 516, 8), // "doCenter"
QT_MOC_LITERAL(45, 525, 6), // "doZero"
QT_MOC_LITERAL(46, 532, 6), // "doSend"
QT_MOC_LITERAL(47, 539, 17), // "poll_tracker_info"
QT_MOC_LITERAL(48, 557, 12), // "doSerialInfo"
QT_MOC_LITERAL(49, 570, 25) // "on_lineSend_returnPressed"

    },
    "TrackerControls\0WriteMsgInfo\0\0MsgInfo\0"
    "set_mod_port\0val\0set_ena_roll\0"
    "set_ena_pitch\0set_ena_yaw\0set_ena_x\0"
    "set_ena_y\0set_ena_z\0set_inv_roll\0"
    "set_inv_pitch\0set_inv_yaw\0set_inv_x\0"
    "set_inv_y\0set_inv_z\0set_rot_roll\0"
    "set_rot_pitch\0set_rot_yaw\0set_acc_x\0"
    "set_acc_y\0set_acc_z\0set_cmd_start\0"
    "set_cmd_stop\0set_cmd_init\0set_cmd_reset\0"
    "set_cmd_center\0set_cmd_zero\0set_DelayInit\0"
    "set_DelayStart\0set_DelaySeq\0set_endian\0"
    "set_Fps\0set_mod_baud\0set_mod_dataBits\0"
    "set_mod_parity\0set_mod_stopBits\0"
    "set_mod_flowControl\0doOK\0doCancel\0"
    "doSave\0doReset\0doCenter\0doZero\0doSend\0"
    "poll_tracker_info\0doSerialInfo\0"
    "on_lineSend_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackerControls[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x0a /* Public */,
       4,    1,  247,    2, 0x09 /* Protected */,
       6,    1,  250,    2, 0x09 /* Protected */,
       7,    1,  253,    2, 0x09 /* Protected */,
       8,    1,  256,    2, 0x09 /* Protected */,
       9,    1,  259,    2, 0x09 /* Protected */,
      10,    1,  262,    2, 0x09 /* Protected */,
      11,    1,  265,    2, 0x09 /* Protected */,
      12,    1,  268,    2, 0x09 /* Protected */,
      13,    1,  271,    2, 0x09 /* Protected */,
      14,    1,  274,    2, 0x09 /* Protected */,
      15,    1,  277,    2, 0x09 /* Protected */,
      16,    1,  280,    2, 0x09 /* Protected */,
      17,    1,  283,    2, 0x09 /* Protected */,
      18,    1,  286,    2, 0x09 /* Protected */,
      19,    1,  289,    2, 0x09 /* Protected */,
      20,    1,  292,    2, 0x09 /* Protected */,
      21,    1,  295,    2, 0x09 /* Protected */,
      22,    1,  298,    2, 0x09 /* Protected */,
      23,    1,  301,    2, 0x09 /* Protected */,
      24,    1,  304,    2, 0x09 /* Protected */,
      25,    1,  307,    2, 0x09 /* Protected */,
      26,    1,  310,    2, 0x09 /* Protected */,
      27,    1,  313,    2, 0x09 /* Protected */,
      28,    1,  316,    2, 0x09 /* Protected */,
      29,    1,  319,    2, 0x09 /* Protected */,
      30,    1,  322,    2, 0x09 /* Protected */,
      31,    1,  325,    2, 0x09 /* Protected */,
      32,    1,  328,    2, 0x09 /* Protected */,
      33,    1,  331,    2, 0x09 /* Protected */,
      34,    1,  334,    2, 0x09 /* Protected */,
      35,    1,  337,    2, 0x09 /* Protected */,
      36,    1,  340,    2, 0x09 /* Protected */,
      37,    1,  343,    2, 0x09 /* Protected */,
      38,    1,  346,    2, 0x09 /* Protected */,
      39,    1,  349,    2, 0x09 /* Protected */,
      40,    0,  352,    2, 0x09 /* Protected */,
      41,    0,  353,    2, 0x09 /* Protected */,
      42,    0,  354,    2, 0x09 /* Protected */,
      43,    0,  355,    2, 0x09 /* Protected */,
      44,    0,  356,    2, 0x09 /* Protected */,
      45,    0,  357,    2, 0x09 /* Protected */,
      46,    0,  358,    2, 0x09 /* Protected */,
      47,    0,  359,    2, 0x09 /* Protected */,
      48,    0,  360,    2, 0x09 /* Protected */,
      49,    0,  361,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackerControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackerControls *_t = static_cast<TrackerControls *>(_o);
        switch (_id) {
        case 0: _t->WriteMsgInfo((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->set_mod_port((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->set_ena_roll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->set_ena_pitch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->set_ena_yaw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->set_ena_x((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->set_ena_y((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->set_ena_z((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->set_inv_roll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->set_inv_pitch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->set_inv_yaw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->set_inv_x((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->set_inv_y((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->set_inv_z((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->set_rot_roll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->set_rot_pitch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->set_rot_yaw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->set_acc_x((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->set_acc_y((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->set_acc_z((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->set_cmd_start((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->set_cmd_stop((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->set_cmd_init((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->set_cmd_reset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->set_cmd_center((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->set_cmd_zero((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->set_DelayInit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->set_DelayStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->set_DelaySeq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->set_endian((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->set_Fps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->set_mod_baud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->set_mod_dataBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->set_mod_parity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->set_mod_stopBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->set_mod_flowControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->doOK(); break;
        case 37: _t->doCancel(); break;
        case 38: _t->doSave(); break;
        case 39: _t->doReset(); break;
        case 40: _t->doCenter(); break;
        case 41: _t->doZero(); break;
        case 42: _t->doSend(); break;
        case 43: _t->poll_tracker_info(); break;
        case 44: _t->doSerialInfo(); break;
        case 45: _t->on_lineSend_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject TrackerControls::staticMetaObject = {
    { &ITrackerDialog::staticMetaObject, qt_meta_stringdata_TrackerControls.data,
      qt_meta_data_TrackerControls,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrackerControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackerControls::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrackerControls.stringdata))
        return static_cast<void*>(const_cast< TrackerControls*>(this));
    return ITrackerDialog::qt_metacast(_clname);
}

int TrackerControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ITrackerDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
