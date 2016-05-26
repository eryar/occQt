#-------------------------------------------------
#
# Project created by QtCreator 2013-08-18T15:52:09
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = occQt
TEMPLATE = app

DEFINES += WNT

SOURCES += main.cpp \
    occQt.cpp \
    occView.cpp

HEADERS  += \
    occQt.h \
    occView.h

FORMS    += \
    occQt.ui

OCCT_ROOT = D:/OpenCASCADE6.9.0/opencascade-6.9.0
OCCT_LIB = $$OCCT_ROOT/win32/vc9/libd

INCLUDEPATH += $$OCCT_ROOT\inc

debug:LIBS += \
    -L$${OCCT_LIB} -lTKernel \
    -L$${OCCT_LIB} -lTKMath \
    -L$${OCCT_LIB} -lTKBRep \
    -L$${OCCT_LIB} -lTKTopAlgo \
    -L$${OCCT_LIB} -lTKPrim \
    -L$${OCCT_LIB} -lTKBO \
    -L$${OCCT_LIB} -lTKOffset \
    -L$${OCCT_LIB} -lTKService \
    -L$${OCCT_LIB} -lTKV3d \
    -L$${OCCT_LIB} -lTKOpenGl \
    -L$${OCCT_LIB} -lTKFillet

RESOURCES += \
    occqt.qrc
