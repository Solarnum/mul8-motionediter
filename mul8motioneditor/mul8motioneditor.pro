#-------------------------------------------------
#
# Project created by QtCreator 2014-04-23T21:28:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mul8motioneditor
TEMPLATE = app
RC_FILE = icon.rc

SOURCES += main.cpp\
    editwindow.cpp \
    mul8_mainview.cpp \
    CreateMotion.cpp

HEADERS  += \
    mul8_mainview.h

FORMS    += \
    mul8_mainview.ui

CONFIG += c++11

OTHER_FILES += \
    movements.dat \
    icon.rc

RESOURCES += \
    dataresources.qrc
