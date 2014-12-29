#-------------------------------------------------
#
# Project created by QtCreator 2013-08-18T15:52:09
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = occQt
TEMPLATE = app


SOURCES += main.cpp \
    occQt.cpp \
    OccView.cpp

HEADERS  += \
    occQt.h \
    OccView.h

FORMS    += \
    occQt.ui

INCLUDEPATH += D:\OpenCASCADE6.8.0\opencascade-6.8.0\inc

LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKernel.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKMath.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKBRep.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKTopAlgo.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKPrim.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKBO.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKOffset.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKService.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKV3d.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKOpenGl.lib
LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKFillet.lib

RESOURCES += \
    occqt.qrc
