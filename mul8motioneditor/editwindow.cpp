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
    if(ui->motorPosCheckBox->isChecked() == true && ui->motorTempCheckBox->isChecked() == false){
        if(ui->degRadioButton->isChecked() == true){
           for(i = 1; i<25; i++){
               motorLabels[i]->setText("Pos Deg");
           }
        }
        else{
            for(i = 1; i<25; i++){
                motorLabels[i]->setText("Pos Std");
            }
        }
    }
    else if(ui->motorTempCheckBox->isChecked() == true && ui->motorPosCheckBox->isChecked() == false){
        for(i = 1; i<25; i++){
            motorLabels[i]->setText("Temp");
        }
    }
    else if(ui->motorTempCheckBox->isChecked() == true && ui->motorPosCheckBox->isChecked() == true){
        if(ui->degRadioButton->isChecked() == true){
            for(i = 1; i<25; i++){
                motorLabels[i]->setText("PosD and Temp");
            }
        }
        else{
            for(i = 1; i<25; i++){
                motorLabels[i]->setText("PosS and Temp");
            }
        }
    }
    else{
        if(ui->degRadioButton->isChecked() == true){
           for(i = 1; i<25; i++){
               motorLabels[i]->setText("Pos Deg");
           }
        }
        else{
            for(i = 1; i<25; i++){
                motorLabels[i]->setText("Pos Std");
            }
        }
        ui->motorPosCheckBox->setChecked(true);
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
    int i = 1;
     cout << "Release Left Leg" << endl;
     for(i = 1; i<12; i=i+2){
         motorLabels[i]->setChecked(false);
     }
     setGUIMotorValues();
}

void MUL8_MainView::on_engageLeftLegButton_clicked()
{
    int i = 1;
    cout << "Engage Left Leg" << endl;
    for(i = 1; i<12; i=i+2){
        motorLabels[i]->setChecked(true);
    }
    setGUIMotorValues();
}

void MUL8_MainView::on_releaseRightLegButton_clicked()
{
    int i = 2;
    cout << "Release Right Leg" << endl;
    for(i = 2; i<13; i=i+2){
        motorLabels[i]->setChecked(false);
    }
    setGUIMotorValues();
}

void MUL8_MainView::on_engageRightLegButton_clicked()
{
    int i = 2;
    cout << "Engage Right Leg" << endl;
    for(i = 2; i<13; i=i+2){
        motorLabels[i]->setChecked(true);
    }
    setGUIMotorValues();
}

void MUL8_MainView::on_engageMotorButton_clicked()
{
    int motorNum = ui->engageMotorSpinBox->value();
    cout << "Engage Motor: " << motorNum << endl;
     motorLabels[motorNum]->setChecked(true);
    setGUIMotorValues();
}

void MUL8_MainView::on_engageAllMotorButton_clicked()
{
    int i = 1;
    cout << "Engage All Motors" << endl;
    for(i = 1; i<25; i++){
        motorLabels[i]->setChecked(true);
    }
    setGUIMotorValues();
}

void MUL8_MainView::on_releaseMotorButton_clicked()
{
    int motorNum = ui->releaseMotorSpinBox->value();
     cout << "Release Motor: " << motorNum << endl;
     motorLabels[motorNum]->setChecked(false);
     setGUIMotorValues();
}

void MUL8_MainView::on_releaseAllMotorButton_clicked()
{
    int i = 1;
    cout << "Release All Motors" << endl;
    setGUIMotorValues();
    for(i = 1; i<25; i++){
        motorLabels[i]->setChecked(false);
    }
}

void MUL8_MainView::on_savePositionsButton_clicked()
{
    cout << "Save Positions" << endl;
    setGUIMotorValues();
}//End of Motor Commands

//Start of Motor Values
void MUL8_MainView::on_motorPosCheckBox_clicked()
{
   setGUIMotorValues();
}

void MUL8_MainView::on_motorTempCheckBox_clicked()
{
   setGUIMotorValues();
}

void MUL8_MainView::on_degRadioButton_clicked()
{
    setGUIMotorValues();
}

void MUL8_MainView::on_posRadioButton_clicked()
{
    setGUIMotorValues();
}//End of Motor Values


//Start of Robot Motor Check
void MUL8_MainView::on_m1Label_clicked(bool checked)
{
    //motorLabels[1]->setChecked(checked);
    if(checked == true)
        std::cout << "1 en" << endl;
    else
        std::cout << "1 dis" << endl;
}

void MUL8_MainView::on_m2Label_clicked(bool checked)
{
    //motorLabels[2]->setChecked(checked);
    if(checked == true)
        std::cout << "2 en" << endl;
    else
        std::cout << "2 dis" << endl;
}

void MUL8_MainView::on_m3Label_clicked(bool checked)
{
    //motorLabels[3]->setChecked(checked);
    if(checked == true)
        std::cout << "3 en" << endl;
    else
        std::cout << "3 dis" << endl;
}

void MUL8_MainView::on_m4Label_clicked(bool checked)
{
    //motorLabels[4]->setChecked(checked);
    if(checked == true)
        std::cout << "4 en" << endl;
    else
        std::cout << "4 dis" << endl;
}

void MUL8_MainView::on_m5Label_clicked(bool checked)
{
    //motorLabels[5]->setChecked(checked);
    if(checked == true)
        std::cout << "5 en" << endl;
    else
        std::cout << "5 dis" << endl;
}

void MUL8_MainView::on_m6Label_clicked(bool checked)
{
    //motorLabels[6]->setChecked(checked);
    if(checked == true)
        std::cout << "6 en" << endl;
    else
        std::cout << "6 dis" << endl;
}

void MUL8_MainView::on_m7Label_clicked(bool checked)
{
    //motorLabels[7]->setChecked(checked);
    if(checked == true)
        std::cout << "7 en" << endl;
    else
        std::cout << "7 dis" << endl;
}

void MUL8_MainView::on_m8Label_clicked(bool checked)
{
    //motorLabels[8]->setChecked(checked);
    if(checked == true)
        std::cout << "8 en" << endl;
    else
        std::cout << "8 dis" << endl;
}

void MUL8_MainView::on_m9Label_clicked(bool checked)
{
    //motorLabels[9]->setChecked(checked);
    if(checked == true)
        std::cout << "9 en" << endl;
    else
        std::cout << "9 dis" << endl;
}

void MUL8_MainView::on_m10Label_clicked(bool checked)
{
    //motorLabels[10]->setChecked(checked);
    if(checked == true)
        std::cout << "10 en" << endl;
    else
        std::cout << "10 dis" << endl;
}

void MUL8_MainView::on_m11Label_clicked(bool checked)
{
    //motorLabels[11]->setChecked(checked);
    if(checked == true)
        std::cout << "11 en" << endl;
    else
        std::cout << "11 dis" << endl;
}

void MUL8_MainView::on_m12Label_clicked(bool checked)
{
    //motorLabels[12]->setChecked(checked);
    if(checked == true)
        std::cout << "12 en" << endl;
    else
        std::cout << "12 dis" << endl;
}

void MUL8_MainView::on_m13Label_clicked(bool checked)
{
    //motorLabels[13]->setChecked(checked);
    if(checked == true)
        std::cout << "13 en" << endl;
    else
        std::cout << "13 dis" << endl;
}

void MUL8_MainView::on_m14Label_clicked(bool checked)
{
    //motorLabels[14]->setChecked(checked);
    if(checked == true)
        std::cout << "14 en" << endl;
    else
        std::cout << "14 dis" << endl;
}

void MUL8_MainView::on_m15Label_clicked(bool checked)
{
    //motorLabels[15]->setChecked(checked);
    if(checked == true)
        std::cout << "15 en" << endl;
    else
        std::cout << "15 dis" << endl;
}

void MUL8_MainView::on_m16Label_clicked(bool checked)
{
    //motorLabels[16]->setChecked(checked);
    if(checked == true)
        std::cout << "16 en" << endl;
    else
        std::cout << "16 dis" << endl;
}

void MUL8_MainView::on_m17Label_clicked(bool checked)
{
    //motorLabels[17]->setChecked(checked);
    if(checked == true)
        std::cout << "17 en" << endl;
    else
        std::cout << "17 dis" << endl;
}

void MUL8_MainView::on_m18Label_clicked(bool checked)
{
    //motorLabels[18]->setChecked(checked);
    if(checked == true)
        std::cout << "18 en" << endl;
    else
        std::cout << "18 dis" << endl;
}

void MUL8_MainView::on_m19Label_clicked(bool checked)
{
    //motorLabels[19]->setChecked(checked);
    if(checked == true)
        std::cout << "19 en" << endl;
    else
        std::cout << "19 dis" << endl;
}

void MUL8_MainView::on_m20Label_clicked(bool checked)
{
    //motorLabels[20]->setChecked(checked);
    if(checked == true)
        std::cout << "20 en" << endl;
    else
        std::cout << "20 dis" << endl;
}

void MUL8_MainView::on_m21Label_clicked(bool checked)
{
    //motorLabels[21]->setChecked(checked);
    if(checked == true)
        std::cout << "21 en" << endl;
    else
        std::cout << "21 dis" << endl;
}

void MUL8_MainView::on_m22Label_clicked(bool checked)
{
    //motorLabels[22]->setChecked(checked);
    if(checked == true)
        std::cout << "22 en" << endl;
    else
        std::cout << "22 dis" << endl;
}

void MUL8_MainView::on_m23Label_clicked(bool checked)
{
    //motorLabels[23]->setChecked(checked);
    if(checked == true)
        std::cout << "23 en" << endl;
    else
        std::cout << "23 dis" << endl;
}

void MUL8_MainView::on_m24Label_clicked(bool checked)
{
    //motorLabels[24]->setChecked(checked);
    if(checked == true)
        std::cout << "24 en" << endl;
    else
        std::cout << "24 dis" << endl;
}
