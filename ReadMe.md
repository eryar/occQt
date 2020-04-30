MIT License
===========

Copyright (c) 2018 Shing Liu (eryar@163.com)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Building occQt on Linux
=======================
First you need the qt and Mesa/OpenGL development files:
sudo apt-get install qt5-default qt5-qmake qtbase5-dev-tools qtcreator  libglu1-mesa-dev mesa-common-dev

For Open CASCADE Official Edition
---------------------------------
1. Build Open CASCADE from source with CMake(https://dev.opencascade.org/doc/overview/html/occt_dev_guides__building_cmake.html);
2. Build occQt with Qt Creator;


For Open CASCADE Community Edition
----------------------------------
Then from the FreeCad ppa (make sure you have http://ppa.launchpad.net/freecad-maintainers/freecad-daily/ubuntu in your apt sources list):
sudo apt-get install oce-draw liboce-modeling-dev liboce-ocaf-dev 

Building occQt on Windows
=========================

For QtCreator
-------------------------------
Open the occQt.pro from the Qt menu and set 
the  variable CASROOT  Opencascade installation path

For VisualStudio
-------------------------------
First you need the qt-vs-addin, you can download it from here: http://download.qt.io/archive/vsaddin/
open th occQt.pro and set the  variable CASROOT  Opencascade installation path
then open the occQt.pro from the Qt menu in the Visual Studio.

中国用户
--------
对于中国用户，推荐清华大学开源软件镜像站去下载开源程序相关资源，速度快：
https://mirrors.tuna.tsinghua.edu.cn/

关于Qt的资源镜像地址为：
https://mirrors.tuna.tsinghua.edu.cn/qt/

Note
====
1. Demonstrate the operations for the OpenCASCADE viewer, such as pan, zoom and rotate;
   the view manipulate mainly by the middle button of the mouse, and left button is used
   to pick and select;
2. Demonstrate the primitive shape construction algorithms usage, such as box, cone, 
   sphere, cylinder and torus creation;
3. Demonstrate some modeling algorithms, such as prism, revol, loft and fillet, chamfer;
4. Demonstrate boolean operations, such as cut, fuse and common;
5. Demonstrate the helix algorithms;
6. Enjoy!

Contributors
============
Alessandro Screm
https://github.com/AlessandroScrem/occQt

Sönke J. Peters
https://github.com/speters

Anton Fosselius
https://github.com/maidenone

Keith Preston
https://github.com/shrdluk

Paul Hentschel
https://github.com/hpmachining


Feedback
--------
For more info, please visit the web site:
http://www.cppblog.com/eryar/

Shing Liu: eryar@163.com
