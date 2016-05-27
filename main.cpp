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
    // refer to: http://www.opencascade.com/content/error-after-upgrading-690-regarding-csfshadersdirectory-and-casroot-environment-variables
    // since 6.9.0 release, OCCT uses GLSL programs for basic functionality 
    // when provided by driver (not just custom GLSL programs explicitly specified by user).
    // There is no option to disable this functionality, thus your application should 
    // configure CSF_ShadersDirectory to proper location in addition to other OCCT resources.
    // We will take to update description of CSF_ShadersDirectory variable in OCCT documentation.
    OSD_Environment aShaderEnv("CSF_ShadersDirectory", "D:/OpenCASCADE6.9.0/opencascade-6.9.0/src/Shaders");
    aShaderEnv.Build();

    QApplication a(argc, argv);

    occQt w;
    w.show();
    
    return a.exec();
}
