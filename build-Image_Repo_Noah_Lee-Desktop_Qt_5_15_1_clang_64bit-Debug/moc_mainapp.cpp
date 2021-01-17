/****************************************************************************
** Meta object code from reading C++ file 'mainapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Image_Repo_Noah_Lee/mainapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainApp_t {
    QByteArrayData data[10];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainApp_t qt_meta_stringdata_mainApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "mainApp"
QT_MOC_LITERAL(1, 8, 14), // "on_add_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "on_next_user_clicked"
QT_MOC_LITERAL(4, 45, 20), // "on_next_prod_clicked"
QT_MOC_LITERAL(5, 66, 19), // "on_delete_2_clicked"
QT_MOC_LITERAL(6, 86, 18), // "on_deposit_clicked"
QT_MOC_LITERAL(7, 105, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 127, 17), // "on_search_clicked"
QT_MOC_LITERAL(9, 145, 17) // "on_logout_clicked"

    },
    "mainApp\0on_add_clicked\0\0on_next_user_clicked\0"
    "on_next_prod_clicked\0on_delete_2_clicked\0"
    "on_deposit_clicked\0on_pushButton_clicked\0"
    "on_search_clicked\0on_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void mainApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_clicked(); break;
        case 1: _t->on_next_user_clicked(); break;
        case 2: _t->on_next_prod_clicked(); break;
        case 3: _t->on_delete_2_clicked(); break;
        case 4: _t->on_deposit_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_search_clicked(); break;
        case 7: _t->on_logout_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mainApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mainApp.data,
    qt_meta_data_mainApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainApp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mainApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
