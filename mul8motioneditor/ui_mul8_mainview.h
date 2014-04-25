/********************************************************************************
** Form generated from reading UI file 'mul8_mainview.ui'
**
** Created: Fri Apr 25 01:32:46 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUL8_MAINVIEW_H
#define UI_MUL8_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MUL8_MainView
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Main;
    QPushButton *playMotionButton;
    QListWidget *preExistingMotionList;
    QListWidget *currentMotionPlaybackList;
    QFrame *line;
    QPushButton *addMotionToListButton;
    QPushButton *removeMotionFromListButton;
    QCheckBox *checkBox;
    QPushButton *clearListButton;
    QWidget *Edit;
    QGroupBox *MotorControlBox;
    QGroupBox *motorCommandBox;
    QPushButton *nextStepButton;
    QPushButton *releaseMotorButton;
    QSpinBox *releaseMotorSpinBox;
    QPushButton *releaseAllMotorButton;
    QPushButton *engageMotorButton;
    QSpinBox *engageMotorSpinBox;
    QPushButton *engageAllMotorButton;
    QPushButton *releaseLeftLegButton;
    QPushButton *releaseRightLegButton;
    QPushButton *engageLeftLegButton;
    QPushButton *engageRightLegButton;
    QPushButton *savePositionsButton;
    QLabel *stepNumLabel;
    QGroupBox *motorValueBox;
    QCheckBox *motorTempCheckBox;
    QCheckBox *motorPosCheckBox;
    QRadioButton *degRadioButton;
    QRadioButton *posRadioButton;
    QLabel *robotLabel;
    QCheckBox *m24Label;
    QCheckBox *m23Label;
    QCheckBox *m15Label;
    QCheckBox *m13Label;
    QCheckBox *m17Label;
    QCheckBox *m19Label;
    QCheckBox *m21Label;
    QCheckBox *m16Label;
    QCheckBox *m14Label;
    QCheckBox *m18Label;
    QCheckBox *m20Label;
    QCheckBox *m22Label;
    QCheckBox *m2Label;
    QCheckBox *m4Label;
    QCheckBox *m6Label;
    QCheckBox *m8Label;
    QCheckBox *m12Label;
    QCheckBox *m10Label;
    QCheckBox *m1Label;
    QCheckBox *m3Label;
    QCheckBox *m5Label;
    QCheckBox *m7Label;
    QCheckBox *m11Label;
    QCheckBox *m9Label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuMU_L8_Motion_Editor;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MUL8_MainView)
    {
        if (MUL8_MainView->objectName().isEmpty())
            MUL8_MainView->setObjectName(QString::fromUtf8("MUL8_MainView"));
        MUL8_MainView->resize(911, 601);
        centralWidget = new QWidget(MUL8_MainView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 60, 911, 481));
        Main = new QWidget();
        Main->setObjectName(QString::fromUtf8("Main"));
        playMotionButton = new QPushButton(Main);
        playMotionButton->setObjectName(QString::fromUtf8("playMotionButton"));
        playMotionButton->setGeometry(QRect(270, 380, 131, 32));
        preExistingMotionList = new QListWidget(Main);
        preExistingMotionList->setObjectName(QString::fromUtf8("preExistingMotionList"));
        preExistingMotionList->setGeometry(QRect(20, 170, 261, 192));
        currentMotionPlaybackList = new QListWidget(Main);
        currentMotionPlaybackList->setObjectName(QString::fromUtf8("currentMotionPlaybackList"));
        currentMotionPlaybackList->setGeometry(QRect(390, 170, 256, 192));
        line = new QFrame(Main);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(320, 180, 20, 161));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        addMotionToListButton = new QPushButton(Main);
        addMotionToListButton->setObjectName(QString::fromUtf8("addMotionToListButton"));
        addMotionToListButton->setGeometry(QRect(10, 120, 151, 32));
        removeMotionFromListButton = new QPushButton(Main);
        removeMotionFromListButton->setObjectName(QString::fromUtf8("removeMotionFromListButton"));
        removeMotionFromListButton->setGeometry(QRect(493, 120, 151, 32));
        checkBox = new QCheckBox(Main);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(300, 360, 87, 20));
        clearListButton = new QPushButton(Main);
        clearListButton->setObjectName(QString::fromUtf8("clearListButton"));
        clearListButton->setGeometry(QRect(540, 380, 114, 32));
        tabWidget->addTab(Main, QString());
        Edit = new QWidget();
        Edit->setObjectName(QString::fromUtf8("Edit"));
        MotorControlBox = new QGroupBox(Edit);
        MotorControlBox->setObjectName(QString::fromUtf8("MotorControlBox"));
        MotorControlBox->setGeometry(QRect(0, 0, 921, 451));
        motorCommandBox = new QGroupBox(MotorControlBox);
        motorCommandBox->setObjectName(QString::fromUtf8("motorCommandBox"));
        motorCommandBox->setGeometry(QRect(20, 40, 181, 401));
        nextStepButton = new QPushButton(motorCommandBox);
        nextStepButton->setObjectName(QString::fromUtf8("nextStepButton"));
        nextStepButton->setGeometry(QRect(0, 20, 111, 25));
        releaseMotorButton = new QPushButton(motorCommandBox);
        releaseMotorButton->setObjectName(QString::fromUtf8("releaseMotorButton"));
        releaseMotorButton->setGeometry(QRect(0, 260, 111, 25));
        releaseMotorSpinBox = new QSpinBox(motorCommandBox);
        releaseMotorSpinBox->setObjectName(QString::fromUtf8("releaseMotorSpinBox"));
        releaseMotorSpinBox->setGeometry(QRect(120, 260, 41, 25));
        releaseMotorSpinBox->setMinimum(1);
        releaseMotorSpinBox->setMaximum(24);
        releaseAllMotorButton = new QPushButton(motorCommandBox);
        releaseAllMotorButton->setObjectName(QString::fromUtf8("releaseAllMotorButton"));
        releaseAllMotorButton->setGeometry(QRect(20, 290, 131, 25));
        engageMotorButton = new QPushButton(motorCommandBox);
        engageMotorButton->setObjectName(QString::fromUtf8("engageMotorButton"));
        engageMotorButton->setGeometry(QRect(0, 190, 111, 25));
        engageMotorSpinBox = new QSpinBox(motorCommandBox);
        engageMotorSpinBox->setObjectName(QString::fromUtf8("engageMotorSpinBox"));
        engageMotorSpinBox->setGeometry(QRect(120, 190, 41, 25));
        engageMotorSpinBox->setMinimum(1);
        engageMotorSpinBox->setMaximum(24);
        engageAllMotorButton = new QPushButton(motorCommandBox);
        engageAllMotorButton->setObjectName(QString::fromUtf8("engageAllMotorButton"));
        engageAllMotorButton->setGeometry(QRect(20, 220, 131, 25));
        releaseLeftLegButton = new QPushButton(motorCommandBox);
        releaseLeftLegButton->setObjectName(QString::fromUtf8("releaseLeftLegButton"));
        releaseLeftLegButton->setGeometry(QRect(20, 50, 131, 25));
        releaseRightLegButton = new QPushButton(motorCommandBox);
        releaseRightLegButton->setObjectName(QString::fromUtf8("releaseRightLegButton"));
        releaseRightLegButton->setGeometry(QRect(20, 120, 131, 25));
        engageLeftLegButton = new QPushButton(motorCommandBox);
        engageLeftLegButton->setObjectName(QString::fromUtf8("engageLeftLegButton"));
        engageLeftLegButton->setGeometry(QRect(20, 80, 131, 25));
        engageRightLegButton = new QPushButton(motorCommandBox);
        engageRightLegButton->setObjectName(QString::fromUtf8("engageRightLegButton"));
        engageRightLegButton->setGeometry(QRect(20, 150, 131, 25));
        savePositionsButton = new QPushButton(motorCommandBox);
        savePositionsButton->setObjectName(QString::fromUtf8("savePositionsButton"));
        savePositionsButton->setGeometry(QRect(20, 330, 131, 25));
        stepNumLabel = new QLabel(motorCommandBox);
        stepNumLabel->setObjectName(QString::fromUtf8("stepNumLabel"));
        stepNumLabel->setGeometry(QRect(130, 20, 21, 25));
        motorValueBox = new QGroupBox(MotorControlBox);
        motorValueBox->setObjectName(QString::fromUtf8("motorValueBox"));
        motorValueBox->setGeometry(QRect(220, 320, 171, 121));
        motorTempCheckBox = new QCheckBox(motorValueBox);
        motorTempCheckBox->setObjectName(QString::fromUtf8("motorTempCheckBox"));
        motorTempCheckBox->setGeometry(QRect(10, 90, 151, 20));
        motorPosCheckBox = new QCheckBox(motorValueBox);
        motorPosCheckBox->setObjectName(QString::fromUtf8("motorPosCheckBox"));
        motorPosCheckBox->setGeometry(QRect(10, 30, 151, 20));
        degRadioButton = new QRadioButton(motorValueBox);
        degRadioButton->setObjectName(QString::fromUtf8("degRadioButton"));
        degRadioButton->setGeometry(QRect(20, 60, 61, 21));
        posRadioButton = new QRadioButton(motorValueBox);
        posRadioButton->setObjectName(QString::fromUtf8("posRadioButton"));
        posRadioButton->setGeometry(QRect(90, 60, 51, 21));
        robotLabel = new QLabel(MotorControlBox);
        robotLabel->setObjectName(QString::fromUtf8("robotLabel"));
        robotLabel->setGeometry(QRect(490, 140, 91, 20));
        m24Label = new QCheckBox(MotorControlBox);
        m24Label->setObjectName(QString::fromUtf8("m24Label"));
        m24Label->setGeometry(QRect(500, 20, 121, 21));
        m23Label = new QCheckBox(MotorControlBox);
        m23Label->setObjectName(QString::fromUtf8("m23Label"));
        m23Label->setGeometry(QRect(500, 50, 121, 21));
        m15Label = new QCheckBox(MotorControlBox);
        m15Label->setObjectName(QString::fromUtf8("m15Label"));
        m15Label->setGeometry(QRect(380, 77, 121, 21));
        m13Label = new QCheckBox(MotorControlBox);
        m13Label->setObjectName(QString::fromUtf8("m13Label"));
        m13Label->setGeometry(QRect(250, 77, 121, 21));
        m17Label = new QCheckBox(MotorControlBox);
        m17Label->setObjectName(QString::fromUtf8("m17Label"));
        m17Label->setGeometry(QRect(250, 130, 121, 21));
        m19Label = new QCheckBox(MotorControlBox);
        m19Label->setObjectName(QString::fromUtf8("m19Label"));
        m19Label->setGeometry(QRect(250, 180, 121, 21));
        m21Label = new QCheckBox(MotorControlBox);
        m21Label->setObjectName(QString::fromUtf8("m21Label"));
        m21Label->setGeometry(QRect(250, 210, 121, 21));
        m16Label = new QCheckBox(MotorControlBox);
        m16Label->setObjectName(QString::fromUtf8("m16Label"));
        m16Label->setGeometry(QRect(620, 77, 121, 21));
        m14Label = new QCheckBox(MotorControlBox);
        m14Label->setObjectName(QString::fromUtf8("m14Label"));
        m14Label->setGeometry(QRect(750, 77, 121, 21));
        m18Label = new QCheckBox(MotorControlBox);
        m18Label->setObjectName(QString::fromUtf8("m18Label"));
        m18Label->setGeometry(QRect(750, 130, 121, 21));
        m20Label = new QCheckBox(MotorControlBox);
        m20Label->setObjectName(QString::fromUtf8("m20Label"));
        m20Label->setGeometry(QRect(750, 180, 121, 21));
        m22Label = new QCheckBox(MotorControlBox);
        m22Label->setObjectName(QString::fromUtf8("m22Label"));
        m22Label->setGeometry(QRect(750, 210, 121, 21));
        m2Label = new QCheckBox(MotorControlBox);
        m2Label->setObjectName(QString::fromUtf8("m2Label"));
        m2Label->setGeometry(QRect(620, 210, 121, 21));
        m4Label = new QCheckBox(MotorControlBox);
        m4Label->setObjectName(QString::fromUtf8("m4Label"));
        m4Label->setGeometry(QRect(620, 230, 121, 21));
        m6Label = new QCheckBox(MotorControlBox);
        m6Label->setObjectName(QString::fromUtf8("m6Label"));
        m6Label->setGeometry(QRect(620, 270, 121, 21));
        m8Label = new QCheckBox(MotorControlBox);
        m8Label->setObjectName(QString::fromUtf8("m8Label"));
        m8Label->setGeometry(QRect(620, 290, 121, 21));
        m12Label = new QCheckBox(MotorControlBox);
        m12Label->setObjectName(QString::fromUtf8("m12Label"));
        m12Label->setGeometry(QRect(620, 330, 121, 21));
        m10Label = new QCheckBox(MotorControlBox);
        m10Label->setObjectName(QString::fromUtf8("m10Label"));
        m10Label->setGeometry(QRect(620, 350, 121, 21));
        m1Label = new QCheckBox(MotorControlBox);
        m1Label->setObjectName(QString::fromUtf8("m1Label"));
        m1Label->setGeometry(QRect(400, 210, 121, 21));
        m3Label = new QCheckBox(MotorControlBox);
        m3Label->setObjectName(QString::fromUtf8("m3Label"));
        m3Label->setGeometry(QRect(400, 230, 121, 21));
        m5Label = new QCheckBox(MotorControlBox);
        m5Label->setObjectName(QString::fromUtf8("m5Label"));
        m5Label->setGeometry(QRect(400, 270, 121, 21));
        m7Label = new QCheckBox(MotorControlBox);
        m7Label->setObjectName(QString::fromUtf8("m7Label"));
        m7Label->setGeometry(QRect(400, 290, 121, 21));
        m11Label = new QCheckBox(MotorControlBox);
        m11Label->setObjectName(QString::fromUtf8("m11Label"));
        m11Label->setGeometry(QRect(400, 330, 121, 21));
        m9Label = new QCheckBox(MotorControlBox);
        m9Label->setObjectName(QString::fromUtf8("m9Label"));
        m9Label->setGeometry(QRect(400, 350, 121, 21));
        tabWidget->addTab(Edit, QString());
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 114, 32));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 20, 151, 32));
        MUL8_MainView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MUL8_MainView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 20));
        menuMU_L8_Motion_Editor = new QMenu(menuBar);
        menuMU_L8_Motion_Editor->setObjectName(QString::fromUtf8("menuMU_L8_Motion_Editor"));
        MUL8_MainView->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MUL8_MainView);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MUL8_MainView->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MUL8_MainView);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MUL8_MainView->setStatusBar(statusBar);

        menuBar->addAction(menuMU_L8_Motion_Editor->menuAction());

        retranslateUi(MUL8_MainView);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MUL8_MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MUL8_MainView)
    {
        MUL8_MainView->setWindowTitle(QApplication::translate("MUL8_MainView", "MainWindow", 0, QApplication::UnicodeUTF8));
        playMotionButton->setText(QApplication::translate("MUL8_MainView", "Play Motion", 0, QApplication::UnicodeUTF8));
        addMotionToListButton->setText(QApplication::translate("MUL8_MainView", "Add Motion", 0, QApplication::UnicodeUTF8));
        removeMotionFromListButton->setText(QApplication::translate("MUL8_MainView", "Remove Motion", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MUL8_MainView", "Accept", 0, QApplication::UnicodeUTF8));
        clearListButton->setText(QApplication::translate("MUL8_MainView", "Clear", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Main), QApplication::translate("MUL8_MainView", "Main", 0, QApplication::UnicodeUTF8));
        MotorControlBox->setTitle(QApplication::translate("MUL8_MainView", "Motor Positions", 0, QApplication::UnicodeUTF8));
        motorCommandBox->setTitle(QApplication::translate("MUL8_MainView", "Motor Commands", 0, QApplication::UnicodeUTF8));
        nextStepButton->setText(QApplication::translate("MUL8_MainView", "Next Step", 0, QApplication::UnicodeUTF8));
        releaseMotorButton->setText(QApplication::translate("MUL8_MainView", "Release Motor", 0, QApplication::UnicodeUTF8));
        releaseAllMotorButton->setText(QApplication::translate("MUL8_MainView", "Release All Motors", 0, QApplication::UnicodeUTF8));
        engageMotorButton->setText(QApplication::translate("MUL8_MainView", "Engage Motor", 0, QApplication::UnicodeUTF8));
        engageAllMotorButton->setText(QApplication::translate("MUL8_MainView", "Engage All Motors", 0, QApplication::UnicodeUTF8));
        releaseLeftLegButton->setText(QApplication::translate("MUL8_MainView", "Release Left Leg", 0, QApplication::UnicodeUTF8));
        releaseRightLegButton->setText(QApplication::translate("MUL8_MainView", "Release Right Leg", 0, QApplication::UnicodeUTF8));
        engageLeftLegButton->setText(QApplication::translate("MUL8_MainView", "Engage Left Leg", 0, QApplication::UnicodeUTF8));
        engageRightLegButton->setText(QApplication::translate("MUL8_MainView", "Engage Right Leg", 0, QApplication::UnicodeUTF8));
        savePositionsButton->setText(QApplication::translate("MUL8_MainView", "Save Positions", 0, QApplication::UnicodeUTF8));
        stepNumLabel->setText(QApplication::translate("MUL8_MainView", "1", 0, QApplication::UnicodeUTF8));
        motorValueBox->setTitle(QApplication::translate("MUL8_MainView", "Motor Values", 0, QApplication::UnicodeUTF8));
        motorTempCheckBox->setText(QApplication::translate("MUL8_MainView", "Motor Temp", 0, QApplication::UnicodeUTF8));
        motorPosCheckBox->setText(QApplication::translate("MUL8_MainView", "Motor Position", 0, QApplication::UnicodeUTF8));
        degRadioButton->setText(QApplication::translate("MUL8_MainView", "Deg", 0, QApplication::UnicodeUTF8));
        posRadioButton->setText(QApplication::translate("MUL8_MainView", "Pos", 0, QApplication::UnicodeUTF8));
        robotLabel->setText(QApplication::translate("MUL8_MainView", "Robot Motors", 0, QApplication::UnicodeUTF8));
        m24Label->setText(QApplication::translate("MUL8_MainView", "24:", 0, QApplication::UnicodeUTF8));
        m23Label->setText(QApplication::translate("MUL8_MainView", "23:", 0, QApplication::UnicodeUTF8));
        m15Label->setText(QApplication::translate("MUL8_MainView", "15:", 0, QApplication::UnicodeUTF8));
        m13Label->setText(QApplication::translate("MUL8_MainView", "13:", 0, QApplication::UnicodeUTF8));
        m17Label->setText(QApplication::translate("MUL8_MainView", "17:", 0, QApplication::UnicodeUTF8));
        m19Label->setText(QApplication::translate("MUL8_MainView", "19:", 0, QApplication::UnicodeUTF8));
        m21Label->setText(QApplication::translate("MUL8_MainView", "21:", 0, QApplication::UnicodeUTF8));
        m16Label->setText(QApplication::translate("MUL8_MainView", "16:", 0, QApplication::UnicodeUTF8));
        m14Label->setText(QApplication::translate("MUL8_MainView", "14:", 0, QApplication::UnicodeUTF8));
        m18Label->setText(QApplication::translate("MUL8_MainView", "18:", 0, QApplication::UnicodeUTF8));
        m20Label->setText(QApplication::translate("MUL8_MainView", "20:", 0, QApplication::UnicodeUTF8));
        m22Label->setText(QApplication::translate("MUL8_MainView", "22:", 0, QApplication::UnicodeUTF8));
        m2Label->setText(QApplication::translate("MUL8_MainView", "2:", 0, QApplication::UnicodeUTF8));
        m4Label->setText(QApplication::translate("MUL8_MainView", "4:", 0, QApplication::UnicodeUTF8));
        m6Label->setText(QApplication::translate("MUL8_MainView", "6:", 0, QApplication::UnicodeUTF8));
        m8Label->setText(QApplication::translate("MUL8_MainView", "8:", 0, QApplication::UnicodeUTF8));
        m12Label->setText(QApplication::translate("MUL8_MainView", "12:", 0, QApplication::UnicodeUTF8));
        m10Label->setText(QApplication::translate("MUL8_MainView", "10:", 0, QApplication::UnicodeUTF8));
        m1Label->setText(QApplication::translate("MUL8_MainView", "1:", 0, QApplication::UnicodeUTF8));
        m3Label->setText(QApplication::translate("MUL8_MainView", "3:", 0, QApplication::UnicodeUTF8));
        m5Label->setText(QApplication::translate("MUL8_MainView", "5:", 0, QApplication::UnicodeUTF8));
        m7Label->setText(QApplication::translate("MUL8_MainView", "7:", 0, QApplication::UnicodeUTF8));
        m11Label->setText(QApplication::translate("MUL8_MainView", "11:", 0, QApplication::UnicodeUTF8));
        m9Label->setText(QApplication::translate("MUL8_MainView", "9:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Edit), QApplication::translate("MUL8_MainView", "Edit", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MUL8_MainView", "Connect", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MUL8_MainView", "Open Camera Feed", 0, QApplication::UnicodeUTF8));
        menuMU_L8_Motion_Editor->setTitle(QApplication::translate("MUL8_MainView", "MU-L8 Motion Editor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MUL8_MainView: public Ui_MUL8_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUL8_MAINVIEW_H
