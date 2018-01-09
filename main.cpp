/*
*    Copyright (c) 2014 eryar All Rights Reserved.
*
*           File : main.cpp
*         Author : eryar@163.com
*           Date : 2014-07-15 21:00
*        Version : OpenCASCADE6.8.0 & Qt5.4
*
*    Description : OpenCASCADE with Qt demo.
*/


#include "occQt.h"
#include <QApplication>

#include <OSD_Environment.hxx>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    occQt w;
    w.show();
    
    return a.exec();
}
