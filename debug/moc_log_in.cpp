/****************************************************************************
** Meta object code from reading C++ file 'log_in.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../log_in.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log_in.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_log_in_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[20];
    char stringdata5[24];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_log_in_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_log_in_t qt_meta_stringdata_log_in = {
    {
        QT_MOC_LITERAL(0, 6),  // "log_in"
        QT_MOC_LITERAL(7, 17),  // "on_signin_clicked"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 17),  // "on_home_2_clicked"
        QT_MOC_LITERAL(44, 19),  // "on_signin_2_clicked"
        QT_MOC_LITERAL(64, 23),  // "on_pushButton_2_clicked"
        QT_MOC_LITERAL(88, 23),  // "on_pushButton_3_clicked"
        QT_MOC_LITERAL(112, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(136, 23)   // "on_pushButton_5_clicked"
    },
    "log_in",
    "on_signin_clicked",
    "",
    "on_home_2_clicked",
    "on_signin_2_clicked",
    "on_pushButton_2_clicked",
    "on_pushButton_3_clicked",
    "on_pushButton_4_clicked",
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_log_in[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject log_in::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_log_in.offsetsAndSizes,
    qt_meta_data_log_in,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_log_in_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<log_in, std::true_type>,
        // method 'on_signin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_home_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signin_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void log_in::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<log_in *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_signin_clicked(); break;
        case 1: _t->on_home_2_clicked(); break;
        case 2: _t->on_signin_2_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *log_in::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *log_in::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_log_in.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int log_in::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
