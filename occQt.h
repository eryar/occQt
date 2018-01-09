/*
*    Copyright (c) 2018 Shing Liu All Rights Reserved.
*
*           File : occQt.h
*         Author : Shing Liu(eryar@163.com)
*           Date : 2018-01-08 20:00
*        Version : OpenCASCADE7.2.0 & Qt5.7.1
*
*    Description : OpenCASCADE in Qt.
*/

#ifndef OCCQT_H
#define OCCQT_H

#include "ui_occQt.h"

#include <AIS_InteractiveContext.hxx>

class OccView;

//! Qt main window which include OpenCASCADE for its central widget.
class occQt : public QMainWindow
{
    Q_OBJECT

public:
    //! constructor/destructor.
    occQt(QWidget *parent = 0);
    ~occQt();

protected:
    //! create all the actions.
    void createActions(void);

    //! create all the menus.
    void createMenus(void);

    //! create the toolbar.
    void createToolBars(void);

private slots:
    //! show about box.
    void about(void);

    //! make box test.
    void makeBox(void);

    //! make cone test.
    void makeCone(void);

    //! make sphere test.
    void makeSphere(void);

    //! make cylinder test.
    void makeCylinder(void);

    //! make torus test.
    void makeTorus(void);

    //! fillet test.
    void makeFillet(void);

    //! chamfer test.
    void makeChamfer(void);

    //! test extrude algorithm.
    void makeExtrude(void);

    //! test revol algorithm.
    void makeRevol(void);

    //! test loft algorithm.
    void makeLoft(void);

    //! test boolean operation cut.
    void testCut(void);

    //! test boolean operation fuse.
    void testFuse(void);

    //! test boolean operation common.
    void testCommon(void);

    //! test helix shapes.
    void testHelix(void);

private:
    Ui::occQtClass ui;

    //! make cylindrical helix.
    void makeCylindricalHelix(void);

    //! make conical helix.
    void makeConicalHelix(void);

    //! make toroidal helix.
    void makeToroidalHelix(void);

private:
    //! the exit action.
    QAction* myExitAction;

    //! the actions for the view: pan, reset, fitall.
    QAction* myViewZoomAction;
    QAction* myViewPanAction;
    QAction* myViewRotateAction;
    QAction* myViewResetAction;
    QAction* myViewFitallAction;

    //! the actions to test the OpenCASCADE modeling algorithms.
    QAction* myMakeBoxAction;
    QAction* myMakeConeAction;
    QAction* myMakeSphereAction;
    QAction* myMakeCylinderAction;
    QAction* myMakeTorusAction;

    //! make a fillet box.
    QAction* myFilletAction;
    QAction* myChamferAction;
    QAction* myExtrudeAction;
    QAction* myRevolveAction;
    QAction* myLoftAction;

    //! boolean operations.
    QAction* myCutAction;
    QAction* myFuseAction;
    QAction* myCommonAction;

    //! helix shapes.
    QAction* myHelixAction;

    //! show the about info action.
    QAction* myAboutAction;

    //! the menus of the application.
    QMenu* myFileMenu;
    QMenu* myViewMenu;
    QMenu* myPrimitiveMenu;
    QMenu* myModelingMenu;
    QMenu* myHelpMenu;

    //! the toolbars of the application.
    QToolBar* myViewToolBar;
    QToolBar* myNavigateToolBar;
    QToolBar* myPrimitiveToolBar;
    QToolBar* myModelingToolBar;
    QToolBar* myHelpToolBar;

    // wrapped the widget for occ.
    OccView* myOccView;
};

#endif // OCCQT_H
