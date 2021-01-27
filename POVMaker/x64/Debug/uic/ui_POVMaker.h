/********************************************************************************
** Form generated from reading UI file 'POVMaker.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POVMAKER_H
#define UI_POVMAKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_POVMakerClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSlider *VideoHorizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *PlayPushButton;
    QPushButton *AddCutPushButton;
    QMenuBar *menuBar;
    QMenu *ProjectMenu;
    QMenu *ResourceMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *POVMakerClass)
    {
        if (POVMakerClass->objectName().isEmpty())
            POVMakerClass->setObjectName(QString::fromUtf8("POVMakerClass"));
        POVMakerClass->resize(800, 600);
        centralWidget = new QWidget(POVMakerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        VideoHorizontalSlider = new QSlider(centralWidget);
        VideoHorizontalSlider->setObjectName(QString::fromUtf8("VideoHorizontalSlider"));
        VideoHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(VideoHorizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PlayPushButton = new QPushButton(centralWidget);
        PlayPushButton->setObjectName(QString::fromUtf8("PlayPushButton"));

        horizontalLayout->addWidget(PlayPushButton);

        AddCutPushButton = new QPushButton(centralWidget);
        AddCutPushButton->setObjectName(QString::fromUtf8("AddCutPushButton"));

        horizontalLayout->addWidget(AddCutPushButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        POVMakerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(POVMakerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        ProjectMenu = new QMenu(menuBar);
        ProjectMenu->setObjectName(QString::fromUtf8("ProjectMenu"));
        ResourceMenu = new QMenu(menuBar);
        ResourceMenu->setObjectName(QString::fromUtf8("ResourceMenu"));
        POVMakerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(POVMakerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        POVMakerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(POVMakerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        POVMakerClass->setStatusBar(statusBar);

        menuBar->addAction(ProjectMenu->menuAction());
        menuBar->addAction(ResourceMenu->menuAction());

        retranslateUi(POVMakerClass);

        QMetaObject::connectSlotsByName(POVMakerClass);
    } // setupUi

    void retranslateUi(QMainWindow *POVMakerClass)
    {
        POVMakerClass->setWindowTitle(QCoreApplication::translate("POVMakerClass", "POVMaker", nullptr));
        PlayPushButton->setText(QCoreApplication::translate("POVMakerClass", "\346\222\255\346\224\276", nullptr));
        AddCutPushButton->setText(QCoreApplication::translate("POVMakerClass", "\346\267\273\345\212\240\345\210\207\345\210\206\347\202\271", nullptr));
        ProjectMenu->setTitle(QCoreApplication::translate("POVMakerClass", "\345\267\245\347\250\213", nullptr));
        ResourceMenu->setTitle(QCoreApplication::translate("POVMakerClass", "\350\265\204\346\272\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class POVMakerClass: public Ui_POVMakerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POVMAKER_H
