#include "mul8_mainview.h"
#include "ui_mul8_mainview.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using std::cout;
using std::endl;

QMap <QString, QList <QString> > map;

MUL8_MainView::MUL8_MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MUL8_MainView)
{
    ui->setupUi(this);
    ui->playMotionButton->setEnabled(false);
    populateMotionList();

    initMotorLabels(); //Must be second
    ui->motorPosRadioButton->setChecked(true);
    setGUIMotorValues();
}

void MUL8_MainView::populateMotionList()
{
    QList<QString> kick,stepleft,stepright,stand,turnleft,turnright,walking;

    map["Walk"] = walking<< "W";
    map["Turn Left"] = turnleft << "Q";
    map["Turn Right"] = turnright <<"E";
    map["Stand"] = stand << "S";
    map["Kick"] = kick << "K";
    map["Step Left"] = stepleft << "A";
    map["Step Right"] = stepright << "D";
    ui->preExistingMotionList->addItems(map.keys());

}

MUL8_MainView::~MUL8_MainView()
{
    delete ui;

}

void MUL8_MainView::on_removeMotionFromListButton_clicked()
{
   qDeleteAll(ui->currentMotionPlaybackList->selectedItems());
}

void MUL8_MainView::on_addMotionToListButton_clicked()
{
    QList<QListWidgetItem *> items = ui->preExistingMotionList->selectedItems();
    for(QListWidgetItem * item : items)
    {
        QString key = item->text();
        QMap<QString, QList <QString> > temp;
        temp[key.toUtf8()] = createQListString(key);
        ui->currentMotionPlaybackList->addItems(temp.keys());
    }

}

QList<QString> MUL8_MainView::createQListString(QString key)
{
    QList<QString> qs;
    qs << map[key].at(0).toUtf8().constData();
    cout << qs.at(0).toUtf8().constData() << endl;
    return qs;
}

void MUL8_MainView::on_checkBox_toggled(bool checked)
{
    ui->playMotionButton->setEnabled(checked);

    //If nothing in current playlist do not enable play button
    if(checked && ui->currentMotionPlaybackList->count() == 0)
    {
        ui->checkBox->toggle();
    }

}

void MUL8_MainView::on_playMotionButton_clicked()
{
    ui->checkBox->toggle();

    QList<QListWidgetItem *> items;
    int i = 0;
    while (i < ui->currentMotionPlaybackList->count())
    {
        items.append(ui->currentMotionPlaybackList->item(i));
        QString key = items.at(i)->text();

        i++;
    }

    //Could now send data to robot
    i = 0;
    while (i < items.count())
    {
        cout << map[items.at(i)->text().toUtf8()].at(0).toUtf8().constData() << " ";
        i++;
    }
    cout << endl;

}

void MUL8_MainView::on_clearListButton_clicked()
{
    ui->currentMotionPlaybackList->clear();
}



// _______________________________

