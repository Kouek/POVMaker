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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_POVMakerClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *loadVideosPushButton;
    QListView *videoListView;
    QPushButton *unloadVideosPushButton;
    QGraphicsView *videoGraphicsView;
    QHBoxLayout *horizontalLayout_2;
    QTimeEdit *currentPlayTimeEdit;
    QSlider *videoHorizontalSlider;
    QLabel *endTimeLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *outputPlainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *playPushButton;
    QPushButton *addCutPushButton;
    QMenuBar *menuBar;
    QMenu *ProjectMenu;
    QMenu *ResourceMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *POVMakerClass)
    {
        if (POVMakerClass->objectName().isEmpty())
            POVMakerClass->setObjectName(QString::fromUtf8("POVMakerClass"));
        POVMakerClass->resize(1038, 819);
        centralWidget = new QWidget(POVMakerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(200, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loadVideosPushButton = new QPushButton(groupBox);
        loadVideosPushButton->setObjectName(QString::fromUtf8("loadVideosPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/POVMaker/resource/icon/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadVideosPushButton->setIcon(icon);

        verticalLayout->addWidget(loadVideosPushButton);

        videoListView = new QListView(groupBox);
        videoListView->setObjectName(QString::fromUtf8("videoListView"));
        sizePolicy.setHeightForWidth(videoListView->sizePolicy().hasHeightForWidth());
        videoListView->setSizePolicy(sizePolicy);
        videoListView->setMaximumSize(QSize(200, 16777215));
        videoListView->setIconSize(QSize(50, 50));
        videoListView->setFlow(QListView::TopToBottom);
        videoListView->setViewMode(QListView::ListMode);
        videoListView->setItemAlignment(Qt::AlignLeading);

        verticalLayout->addWidget(videoListView);

        unloadVideosPushButton = new QPushButton(groupBox);
        unloadVideosPushButton->setObjectName(QString::fromUtf8("unloadVideosPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/POVMaker/resource/icon/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        unloadVideosPushButton->setIcon(icon1);

        verticalLayout->addWidget(unloadVideosPushButton);


        horizontalLayout_3->addWidget(groupBox);

        videoGraphicsView = new QGraphicsView(centralWidget);
        videoGraphicsView->setObjectName(QString::fromUtf8("videoGraphicsView"));
        videoGraphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(videoGraphicsView);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        currentPlayTimeEdit = new QTimeEdit(centralWidget);
        currentPlayTimeEdit->setObjectName(QString::fromUtf8("currentPlayTimeEdit"));

        horizontalLayout_2->addWidget(currentPlayTimeEdit);

        videoHorizontalSlider = new QSlider(centralWidget);
        videoHorizontalSlider->setObjectName(QString::fromUtf8("videoHorizontalSlider"));
        videoHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(videoHorizontalSlider);

        endTimeLabel = new QLabel(centralWidget);
        endTimeLabel->setObjectName(QString::fromUtf8("endTimeLabel"));

        horizontalLayout_2->addWidget(endTimeLabel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMaximumSize(QSize(16777215, 200));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        outputPlainTextEdit = new QPlainTextEdit(groupBox_2);
        outputPlainTextEdit->setObjectName(QString::fromUtf8("outputPlainTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(outputPlainTextEdit->sizePolicy().hasHeightForWidth());
        outputPlainTextEdit->setSizePolicy(sizePolicy2);
        outputPlainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        outputPlainTextEdit->setReadOnly(true);

        verticalLayout_2->addWidget(outputPlainTextEdit);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        playPushButton = new QPushButton(centralWidget);
        playPushButton->setObjectName(QString::fromUtf8("playPushButton"));

        horizontalLayout->addWidget(playPushButton);

        addCutPushButton = new QPushButton(centralWidget);
        addCutPushButton->setObjectName(QString::fromUtf8("addCutPushButton"));

        horizontalLayout->addWidget(addCutPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        POVMakerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(POVMakerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1038, 26));
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
        groupBox->setTitle(QCoreApplication::translate("POVMakerClass", "\345\267\262\350\275\275\345\205\245\350\247\206\351\242\221\350\265\204\346\272\220", nullptr));
        loadVideosPushButton->setText(QCoreApplication::translate("POVMakerClass", "\350\275\275\345\205\245\346\226\260\350\247\206\351\242\221", nullptr));
        unloadVideosPushButton->setText(QCoreApplication::translate("POVMakerClass", "\345\215\270\350\275\275\350\247\206\351\242\221", nullptr));
        endTimeLabel->setText(QCoreApplication::translate("POVMakerClass", "22:00", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("POVMakerClass", "\350\276\223\345\207\272\344\277\241\346\201\257", nullptr));
        playPushButton->setText(QCoreApplication::translate("POVMakerClass", "\346\222\255\346\224\276", nullptr));
        addCutPushButton->setText(QCoreApplication::translate("POVMakerClass", "\346\267\273\345\212\240\345\210\207\345\210\206\347\202\271", nullptr));
        ProjectMenu->setTitle(QCoreApplication::translate("POVMakerClass", "\345\267\245\347\250\213", nullptr));
        ResourceMenu->setTitle(QCoreApplication::translate("POVMakerClass", "\350\265\204\346\272\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class POVMakerClass: public Ui_POVMakerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POVMAKER_H
