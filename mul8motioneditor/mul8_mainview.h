#ifndef MUL8_MAINVIEW_H
#define MUL8_MAINVIEW_H

#include <QMainWindow>
#include "ui_mul8_mainview.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <QFile>
#include <QTextStream>


using std::cout;
using std::endl;
using std::string;

namespace Ui {
class MUL8_MainView;
}

class MUL8_MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MUL8_MainView(QWidget *parent = 0);
    ~MUL8_MainView();

private slots:

    void populateMotionList();

    void on_removeMotionFromListButton_clicked();

    void on_addMotionToListButton_clicked();

    void on_checkBox_toggled(bool checked);

    void on_playMotionButton_clicked();

    bool loadMotionFile(QString fname);

    QList<QString> createQListString(QString key);

    void on_clearListButton_clicked();

    void on_nextStepButton_clicked();

    void on_releaseLeftLegButton_clicked();

    void on_engageLeftLegButton_clicked();

    void on_releaseRightLegButton_clicked();

    void on_engageRightLegButton_clicked();

    void on_engageMotorButton_clicked();

    void on_engageAllMotorButton_clicked();

    void on_releaseMotorButton_clicked();

    void on_releaseAllMotorButton_clicked();

    void on_savePositionsButton_clicked();

    void on_motorPosRadioButton_toggled(bool checked);

    void on_motorTempRadioButton_toggled(bool checked);

    void setGUIMotorValues();

    void initMotorLabels();

    void initMotorLabels1();

    void on_nextStepButton_3_clicked();

    void on_releaseLeftLegButton_3_clicked();

    void on_begin_clicked();

    void on_engageLeftLegButton_3_clicked();

    void on_releaseRightLegButton_3_clicked();

    void on_engageRightLegButton_3_clicked();

    void on_engageMotorButton_3_clicked();

    void on_engageAllMotorButton_3_clicked();

    void on_releaseMotorButton_3_clicked();

    void on_releaseAllMotorButton_3_clicked();

    void on_savePositionsButton_3_clicked();

    void on_motorPosRadioButton_3_toggled(bool checked);

    void on_motorTempRadioButton_3_toggled(bool checked);

    void setGUIMotorValues1();

private:
    Ui::MUL8_MainView *ui;
    QLabel *motorLabels[25];
};



#endif // MAINWINDOW_H
