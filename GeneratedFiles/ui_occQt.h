/********************************************************************************
** Form generated from reading UI file 'occQt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCCQT_H
#define UI_OCCQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_occQtClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *occQtClass)
    {
        if (occQtClass->objectName().isEmpty())
            occQtClass->setObjectName(QStringLiteral("occQtClass"));
        occQtClass->resize(680, 500);
        centralWidget = new QWidget(occQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        occQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(occQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 21));
        occQtClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(occQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        occQtClass->setStatusBar(statusBar);

        retranslateUi(occQtClass);

        QMetaObject::connectSlotsByName(occQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *occQtClass)
    {
        occQtClass->setWindowTitle(QApplication::translate("occQtClass", "occQt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class occQtClass: public Ui_occQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCCQT_H
