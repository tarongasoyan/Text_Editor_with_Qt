/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionabout;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuCut;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 436);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dev/img/193-1932572_computer-icons-document-file-format-icon-design-new-file-icon-png.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dev/img/free-file-icon-1453-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/dev/img/Files-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/dev/img/94193_text_512x512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionCopy->setIcon(icon1);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionPaste->setIcon(icon1);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        actionCut->setIcon(icon1);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/dev/img/776-7768192_undo-png-image-redo-cartoon-transparent-png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/dev/img/302-3023093_open-redo-icon-png.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName("actionabout");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/dev/img/sm_5aa8fceea1b8e.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionabout->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(13, 9, 771, 371));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuCut = new QMenu(menubar);
        menuCut->setObjectName("menuCut");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuCut->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuCut->addAction(actionCopy);
        menuCut->addAction(actionPaste);
        menuCut->addAction(actionCut);
        menuCut->addSeparator();
        menuCut->addAction(actionRedo);
        menuCut->addAction(actionUndo);
        menuAbout->addAction(actionabout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionabout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuCut->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
