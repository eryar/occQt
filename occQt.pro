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
    occQt.cpp       \
    occView.cpp

CONFIG += c++11

HEADERS  += \
    occQt.h \
    occView.h

FORMS    += \
    occQt.ui

RESOURCES += \
    occqt.qrc

CASROOT = C:\Users\ascre_p1ijxgd\Documents\ProgC\OpenCASCADE-7.3.0-vc14-64\opencascade-7.3.0

LIBS += -L$$(CASROOT)/win64/vc14/lib


LIBS +=         \
    -lTKernel   \
    -lTKMath    \
    -lTKG3d     \
    -lTKBRep    \
    -lTKGeomBase\
    -lTKGeomAlgo\
    -lTKTopAlgo \
    -lTKPrim    \
    -lTKBO      \
    -lTKBool    \
    -lTKOffset  \
    -lTKService \
    -lTKV3d     \
    -lTKOpenGl  \
    -lTKFillet
