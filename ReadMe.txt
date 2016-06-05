License
=======
The authors hereby grant permission to use, copy, modify, distribute,
and license this software and its documentation for any purpose, provided
that existing copyright notices are retained in all copies and that this
notice is included verbatim in any distributions. No written agreement,
license, or royalty fee is required for any of the authorized uses.

Building occQt on Linux
=======================
First you need the qt and Mesa/OpenGL development files:
sudo apt-get install qt5-default qt5-qmake qtbase5-dev-tools qtcreator  libglu1-mesa-dev mesa-common-dev

Then from the FreeCad ppa (make sure you have http://ppa.launchpad.net/freecad-maintainers/freecad-daily/ubuntu in your apt sources list):
sudo apt-get install oce-draw liboce-modeling-dev liboce-ocaf-dev 

Building occQt on Windows
=========================
First you need the qt-vs-addin, then open the occQt.pro from the Qt menu in the Visual Studio.

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


For more info, please visit the web site:
http://www.cppblog.com/eryar/

Feedback:
Shing Liu: eryar@163.com
