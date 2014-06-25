#-------------------------------------------------
#
# Project created by QtCreator 2014-06-22T22:23:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSvg
TEMPLATE = app


SOURCES += \
    main.cpp \
    UI/mainWindow.cpp \
    svg.cpp \
    parser/svgParser.cpp \
    render/svgRenderEngine.cpp \
    svgElement.cpp \
    svgBaseElement.cpp

HEADERS  += \
    UI/mainWindow.h \
    svg.h \
    parser/svgParser.h \
    render/svgRenderEngine.h \
    svgElement.h \
    svgBaseElement.h \
    common.h
