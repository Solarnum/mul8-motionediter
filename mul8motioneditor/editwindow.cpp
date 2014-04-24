#include "mul8_mainview.h"
#include "ui_mul8_mainview.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using std::cout;
using std::endl;

void MUL8_MainView::initMotorLabels(){
    motorLabels[1] = ui->m1Label;
    motorLabels[2] = ui->m2Label;
    motorLabels[3] = ui->m3Label;
    motorLabels[4] = ui->m4Label;
    motorLabels[5] = ui->m5Label;
    motorLabels[6] = ui->m6Label;
    motorLabels[7] = ui->m7Label;
    motorLabels[8] = ui->m8Label;
    motorLabels[9] = ui->m9Label;
    motorLabels[10] = ui->m10Label;
    motorLabels[11] = ui->m11Label;
    motorLabels[12] = ui->m12Label;
    motorLabels[13] = ui->m13Label;
    motorLabels[14] = ui->m14Label;
    motorLabels[15] = ui->m15Label;
    motorLabels[16] = ui->m16Label;
    motorLabels[17] = ui->m17Label;
    motorLabels[18] = ui->m18Label;
    motorLabels[19] = ui->m19Label;
    motorLabels[20] = ui->m20Label;
    motorLabels[21] = ui->m21Label;
    motorLabels[22] = ui->m22Label;
    motorLabels[23] = ui->m23Label;
    motorLabels[24] = ui->m24Label;
}

void MUL8_MainView::setGUIMotorValues()
{
    int i = 1;
    if(ui->motorPosRadioButton->isChecked() == true){
       for(i = 1; i<25; i++){
           motorLabels[i]->setText("Pos");
       }
    }
    else if(ui->motorTempRadioButton->isChecked() == true){
        for(i = 1; i<25; i++){
            motorLabels[i]->setText("Temp");
        }
    }
}




//Start of Motor Commands - Edit
void MUL8_MainView::on_nextStepButton_clicked()
{
    //Increment the next step count (stepNumLabel)
    QString label = ui->stepNumLabel->text();
    int labelNum = label.toInt();
    labelNum++;
    QString s = QString::number(labelNum);
    ui->stepNumLabel->setText(s);

    //Call Next Step Function
    cout << "Next Step" << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_releaseLeftLegButton_clicked()
{
     cout << "Release Left Leg" << endl;
     setGUIMotorValues();
}

void MUL8_MainView::on_engageLeftLegButton_clicked()
{
    cout << "Engage Left Leg" << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_releaseRightLegButton_clicked()
{
    cout << "Release Right Leg" << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_engageRightLegButton_clicked()
{
    cout << "Engage Right Leg" << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_engageMotorButton_clicked()
{
    int motorNum = ui->engageMotorSpinBox->value();
    cout << "Engage Motor: " << motorNum << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_engageAllMotorButton_clicked()
{
    cout << "Engage All Motors" << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_releaseMotorButton_clicked()
{
    int motorNum = ui->engageMotorSpinBox->value();
     cout << "Release Motor: " << motorNum << endl;
     setGUIMotorValues();
}

void MUL8_MainView::on_releaseAllMotorButton_clicked()
{
    cout << "Release All Motors" << endl;
    setGUIMotorValues();
}

void MUL8_MainView::on_savePositionsButton_clicked()
{
    cout << "Save Positions" << endl;
    setGUIMotorValues();
}//End of Motor Commands

//Start of Motor Values
void MUL8_MainView::on_motorPosRadioButton_toggled(bool checked)
{
    if(checked == true){
        cout << "Motor Pos Radio" << endl;
    }
    setGUIMotorValues();
}

void MUL8_MainView::on_motorTempRadioButton_toggled(bool checked)
{
    if(checked == true){
        cout << "Motor Temp Radio" << endl;
    }
    setGUIMotorValues();
}//End of Motor Values

