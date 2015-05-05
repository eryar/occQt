#-------------------------------------------------
#
# Project created by QtCreator 2013-08-18T15:52:09
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = occQt
TEMPLATE = app


FORMS    += \
    occQt.ui

SOURCES += main.cpp \
    occQt.cpp \
    OccView.cpp

HEADERS  += \
    occQt.h \
    OccView.h

INCLUDEPATH += /usr/include/oce

win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKernel.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKMath.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKBRep.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKTopAlgo.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKPrim.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKBO.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKOffset.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKService.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKV3d.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKOpenGl.lib
win32:  LIBS += D:\OpenCASCADE6.8.0\opencascade-6.8.0\win32\vc12\libd\TKFillet.lib

unix: LIBS += -lTKernel -lTKMath -lTKBrep -lTKTopAlgo -lTKPrim -lTKBO -lTKOffset -lTKService -lTKV3d -lTKOpenGl -lTKFillet

RESOURCES += \
    occqt.qrc
