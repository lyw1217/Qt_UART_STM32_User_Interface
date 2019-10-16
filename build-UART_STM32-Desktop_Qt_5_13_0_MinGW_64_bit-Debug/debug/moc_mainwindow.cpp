/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../UART_STM32/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "serial_connect"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "serial_rescan"
QT_MOC_LITERAL(4, 41, 15), // "serial_received"
QT_MOC_LITERAL(5, 57, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(6, 84, 26), // "on_pushButton_scan_clicked"
QT_MOC_LITERAL(7, 111, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(8, 139, 36), // "on_horizontalSlider_led_value..."
QT_MOC_LITERAL(9, 176, 5), // "value"
QT_MOC_LITERAL(10, 182, 38), // "on_horizontalSlider_servo_val..."
QT_MOC_LITERAL(11, 221, 20), // "on_dial_valueChanged"
QT_MOC_LITERAL(12, 242, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 264, 26), // "on_pushButton_zoom_clicked"
QT_MOC_LITERAL(14, 291, 30), // "on_pushButton_plot_add_clicked"
QT_MOC_LITERAL(15, 322, 32), // "on_pushButton_plot_clear_clicked"
QT_MOC_LITERAL(16, 355, 27) // "on_pushButton_start_clicked"

    },
    "MainWindow\0serial_connect\0\0serial_rescan\0"
    "serial_received\0on_pushButton_send_clicked\0"
    "on_pushButton_scan_clicked\0"
    "on_pushButton_close_clicked\0"
    "on_horizontalSlider_led_valueChanged\0"
    "value\0on_horizontalSlider_servo_valueChanged\0"
    "on_dial_valueChanged\0on_pushButton_clicked\0"
    "on_pushButton_zoom_clicked\0"
    "on_pushButton_plot_add_clicked\0"
    "on_pushButton_plot_clear_clicked\0"
    "on_pushButton_start_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serial_connect(); break;
        case 1: _t->serial_rescan(); break;
        case 2: _t->serial_received(); break;
        case 3: _t->on_pushButton_send_clicked(); break;
        case 4: _t->on_pushButton_scan_clicked(); break;
        case 5: _t->on_pushButton_close_clicked(); break;
        case 6: _t->on_horizontalSlider_led_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_servo_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_dial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_zoom_clicked(); break;
        case 11: _t->on_pushButton_plot_add_clicked(); break;
        case 12: _t->on_pushButton_plot_clear_clicked(); break;
        case 13: _t->on_pushButton_start_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
