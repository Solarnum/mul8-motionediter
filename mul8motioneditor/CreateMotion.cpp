#include "mul8_mainview.h"
#include "ui_mul8_mainview.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using std::cout;
using std::endl;

void MUL8_MainView::initMotorLabels1(){
    motorLabels[1] = ui->m1Label_3;
    motorLabels[2] = ui->m2Label_3;
    motorLabels[3] = ui->m3Label_3;
    motorLabels[4] = ui->m4Label_3;
    motorLabels[5] = ui->m5Label_3;
    motorLabels[6] = ui->m6Label_3;
    motorLabels[7] = ui->m7Label_3;
    motorLabels[8] = ui->m8Label_3;
    motorLabels[9] = ui->m9Label_3;
    motorLabels[10] = ui->m10Label_3;
    motorLabels[11] = ui->m11Label_3;
    motorLabels[12] = ui->m12Label_3;
    motorLabels[13] = ui->m13Label_3;
    motorLabels[14] = ui->m14Label_3;
    motorLabels[15] = ui->m15Label_3;
    motorLabels[16] = ui->m16Label_3;
    motorLabels[17] = ui->m17Label_3;
    motorLabels[18] = ui->m18Label_3;
    motorLabels[19] = ui->m19Label_3;
    motorLabels[20] = ui->m20Label_3;
    motorLabels[21] = ui->m21Label_3;
    motorLabels[22] = ui->m22Label_3;
    motorLabels[23] = ui->m23Label_3;
    motorLabels[24] = ui->m24Label_3;
}

void MUL8_MainView::setGUIMotorValues1()
{
    int i = 1;
    if(ui->motorPosRadioButton_3->isChecked() == true){
       for(i = 1; i<25; i++){
           motorLabels[i]->setText("Pos");
       }
    }
    else if(ui->motorTempRadioButton_3->isChecked() == true){
        for(i = 1; i<25; i++){
            motorLabels[i]->setText("Temp");
        }
    }
}




//Start of Motor Commands - Edit
void MUL8_MainView::on_nextStepButton_3_clicked()
{
    //Increment the next step count (stepNumLabel)
    QString label = ui->stepNumLabel_3->text();
    int labelNum = label.toInt();
    labelNum++;
    QString s = QString::number(labelNum);
    ui->stepNumLabel_3->setText(s);

    //Call Next Step Function
    cout << "Next Step" << endl;
    setGUIMotorValues1();

    //motorController.addMotionStep();
}

void MUL8_MainView::on_releaseLeftLegButton_3_clicked()
{

     cout << "Release Left Leg" << endl;
     setGUIMotorValues1();

}
void MUL8_MainView::on_begin_clicked()
{
   // motorController.setMotion(TEMP_ANIMATION);
  //  motorController.addMotion();
    ui->releaseAllMotorButton_3->setEnabled(true);
    ui->releaseLeftLegButton_3->setEnabled(true);
    ui->engageAllMotorButton_3->setEnabled(true);
    ui->engageLeftLegButton_3->setEnabled(true);
    ui->engageMotorButton_3->setEnabled(true);
    ui->engageMotorSpinBox_3->setEnabled(true);
    ui->engageRightLegButton_3->setEnabled(true);
    ui->nextStepButton_3->setEnabled(true);
    ui->releaseRightLegButton_3->setEnabled(true);
    ui->releaseMotorButton_3->setEnabled(true);
    ui->savePositionsButton_3->setEnabled(true);
    ui->begin->setEnabled(false);

}

void MUL8_MainView::on_engageLeftLegButton_3_clicked()
{
    cout << "Engage Left Leg" << endl;
    setGUIMotorValues1();
}

void MUL8_MainView::on_releaseRightLegButton_3_clicked()
{
    cout << "Release Right Leg" << endl;
    setGUIMotorValues1();
}

void MUL8_MainView::on_engageRightLegButton_3_clicked()
{
    cout << "Engage Right Leg" << endl;
    setGUIMotorValues1();
}

void MUL8_MainView::on_engageMotorButton_3_clicked()
{
    int motorNum = ui->engageMotorSpinBox_3->value();
    cout << "Engage Motor: " << motorNum << endl;
    setGUIMotorValues1();
}

void MUL8_MainView::on_engageAllMotorButton_3_clicked()
{
    cout << "Engage All Motors" << endl;
    setGUIMotorValues1();
}

void MUL8_MainView::on_releaseMotorButton_3_clicked()
{
    int motorNum = ui->engageMotorSpinBox->value();
     cout << "Release Motor: " << motorNum << endl;
     setGUIMotorValues1();
}

void MUL8_MainView::on_releaseAllMotorButton_3_clicked()
{
    cout << "Release All Motors" << endl;
    setGUIMotorValues1();
}

void MUL8_MainView::on_savePositionsButton_3_clicked()
{
    cout << "Save Positions" << endl;
    setGUIMotorValues1();
    ui->releaseAllMotorButton_3->setEnabled(false);
    ui->releaseLeftLegButton_3->setEnabled(false);
    ui->engageAllMotorButton_3->setEnabled(false);
    ui->engageLeftLegButton_3->setEnabled(false);
    ui->engageMotorButton_3->setEnabled(false);
    ui->engageMotorSpinBox_3->setEnabled(false);
    ui->engageRightLegButton_3->setEnabled(false);
    ui->nextStepButton_3->setEnabled(false);
    ui->releaseRightLegButton_3->setEnabled(false);
    ui->releaseMotorButton_3->setEnabled(false);
    ui->savePositionsButton_3->setEnabled(false);
    ui->begin->setEnabled(true);
}//End of Motor Commands

//Start of Motor Values
void MUL8_MainView::on_motorPosRadioButton_3_toggled(bool checked)
{
    if(checked == true){
        cout << "Motor Pos Radio" << endl;
    }
    setGUIMotorValues1();
}

void MUL8_MainView::on_motorTempRadioButton_3_toggled(bool checked)
{
    if(checked == true){
        cout << "Motor Temp Radio" << endl;
    }
    setGUIMotorValues1();
}//End of Motor Values


