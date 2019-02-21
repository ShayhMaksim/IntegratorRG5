TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += qt

QT+=xml

SOURCES += \
    custom.cpp \
    model.cpp \
    Tryyyy.cpp \
    MyLinearAlgebra.cpp

SUBDIRS += \
    Lab2.pro

DISTFILES +=

HEADERS += \
    custom.h \
    model.h \
    MyLinearAlgebra.h




