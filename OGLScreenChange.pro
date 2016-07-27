#-------------------------------------------------
#
# Project created by QtCreator 2016-07-07T21:44:29
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OGLScreenChange
TEMPLATE = app

CONFIG(debug, release|debug):DEFINES += _DEBUG


SOURCES += main.cpp\
    runtime/mainrender.cpp \
    runtime/triangle.cpp \
    runtime/quad.cpp



HEADERS  += runtime/mainrender.h \
    runtime/screen.h \
    runtime/triangle.h \
    runtime/quad.h



FORMS    += runtime/mainrender.ui


RESOURCES += \
    textures.qrc

