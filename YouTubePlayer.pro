#-------------------------------------------------
#
# Project created by QtCreator 2016-05-13T17:06:29
#
#-------------------------------------------------

QT       += core gui network webkit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = YouTubePlayer
TEMPLATE = app


SOURCES += main.cpp\
        youtubeplayer.cpp \
    logindialog.cpp

HEADERS  += \
    logindialog.h

FORMS    += youtubeplayer.ui \
    logindialog.ui

OTHER_FILES += \
    ../client_id.json \
    client_id.json
