/********************************************************************************
** Form generated from reading UI file 'quadgui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUADGUI_H
#define UI_QUADGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quadGUI
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *takeoffButton;
    QPushButton *landButton;
    QPushButton *hoverButton;
    QPushButton *togglecameraButton;
    QPushButton *keyboardButton;
    QPlainTextEdit *xvalText;
    QPlainTextEdit *yvalText;
    QPlainTextEdit *zvalText;
    QPushButton *gotoButton;
    QPushButton *followButton;
    QListWidget *detectList;
    QLCDNumber *botLCD;
    QCheckBox *detectCheck;
    QCheckBox *followCheck;
    QLabel *imgLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *quadGUI)
    {
        if (quadGUI->objectName().isEmpty())
            quadGUI->setObjectName(QString::fromUtf8("quadGUI"));
        quadGUI->resize(758, 517);
        centralWidget = new QWidget(quadGUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(5, 1, 501, 451));
        takeoffButton = new QPushButton(centralWidget);
        takeoffButton->setObjectName(QString::fromUtf8("takeoffButton"));
        takeoffButton->setGeometry(QRect(517, 20, 111, 27));
        landButton = new QPushButton(centralWidget);
        landButton->setObjectName(QString::fromUtf8("landButton"));
        landButton->setGeometry(QRect(640, 20, 111, 27));
        hoverButton = new QPushButton(centralWidget);
        hoverButton->setObjectName(QString::fromUtf8("hoverButton"));
        hoverButton->setGeometry(QRect(580, 100, 111, 27));
        togglecameraButton = new QPushButton(centralWidget);
        togglecameraButton->setObjectName(QString::fromUtf8("togglecameraButton"));
        togglecameraButton->setGeometry(QRect(580, 60, 111, 27));
        keyboardButton = new QPushButton(centralWidget);
        keyboardButton->setObjectName(QString::fromUtf8("keyboardButton"));
        keyboardButton->setGeometry(QRect(560, 150, 151, 27));
        xvalText = new QPlainTextEdit(centralWidget);
        xvalText->setObjectName(QString::fromUtf8("xvalText"));
        xvalText->setGeometry(QRect(530, 200, 51, 21));
        yvalText = new QPlainTextEdit(centralWidget);
        yvalText->setObjectName(QString::fromUtf8("yvalText"));
        yvalText->setGeometry(QRect(600, 200, 51, 21));
        zvalText = new QPlainTextEdit(centralWidget);
        zvalText->setObjectName(QString::fromUtf8("zvalText"));
        zvalText->setGeometry(QRect(670, 200, 51, 21));
        gotoButton = new QPushButton(centralWidget);
        gotoButton->setObjectName(QString::fromUtf8("gotoButton"));
        gotoButton->setGeometry(QRect(590, 240, 98, 27));
        followButton = new QPushButton(centralWidget);
        followButton->setObjectName(QString::fromUtf8("followButton"));
        followButton->setGeometry(QRect(590, 430, 98, 27));
        detectList = new QListWidget(centralWidget);
        detectList->setObjectName(QString::fromUtf8("detectList"));
        detectList->setGeometry(QRect(610, 320, 121, 101));
        botLCD = new QLCDNumber(centralWidget);
        botLCD->setObjectName(QString::fromUtf8("botLCD"));
        botLCD->setGeometry(QRect(530, 360, 64, 23));
        detectCheck = new QCheckBox(centralWidget);
        detectCheck->setObjectName(QString::fromUtf8("detectCheck"));
        detectCheck->setGeometry(QRect(510, 280, 121, 22));
        followCheck = new QCheckBox(centralWidget);
        followCheck->setObjectName(QString::fromUtf8("followCheck"));
        followCheck->setGeometry(QRect(640, 280, 97, 22));
        imgLabel = new QLabel(centralWidget);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        imgLabel->setGeometry(QRect(6, 6, 501, 441));
        quadGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(quadGUI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 758, 25));
        quadGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(quadGUI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        quadGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(quadGUI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        quadGUI->setStatusBar(statusBar);

        retranslateUi(quadGUI);

        QMetaObject::connectSlotsByName(quadGUI);
    } // setupUi

    void retranslateUi(QMainWindow *quadGUI)
    {
        quadGUI->setWindowTitle(QApplication::translate("quadGUI", "quadGUI", 0, QApplication::UnicodeUTF8));
        takeoffButton->setText(QApplication::translate("quadGUI", "Take Off", 0, QApplication::UnicodeUTF8));
        landButton->setText(QApplication::translate("quadGUI", "Land", 0, QApplication::UnicodeUTF8));
        hoverButton->setText(QApplication::translate("quadGUI", "Hover At Place", 0, QApplication::UnicodeUTF8));
        togglecameraButton->setText(QApplication::translate("quadGUI", "Toggle Camera", 0, QApplication::UnicodeUTF8));
        keyboardButton->setText(QApplication::translate("quadGUI", "Keyboard Control", 0, QApplication::UnicodeUTF8));
        gotoButton->setText(QApplication::translate("quadGUI", "Go To Point", 0, QApplication::UnicodeUTF8));
        followButton->setText(QApplication::translate("quadGUI", "Follow Bot", 0, QApplication::UnicodeUTF8));
        detectCheck->setText(QApplication::translate("quadGUI", "Detect + Track", 0, QApplication::UnicodeUTF8));
        followCheck->setText(QApplication::translate("quadGUI", "Follow", 0, QApplication::UnicodeUTF8));
        imgLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class quadGUI: public Ui_quadGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADGUI_H
