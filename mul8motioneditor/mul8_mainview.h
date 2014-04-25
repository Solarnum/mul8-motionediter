#ifndef MUL8_MAINVIEW_H
#define MUL8_MAINVIEW_H

#include <QMainWindow>
#include "ui_mul8_mainview.h"

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


        void setGUIMotorValues();

        void initMotorLabels();


        void on_motorPosCheckBox_clicked();

        void on_motorTempCheckBox_clicked();

        void on_degRadioButton_clicked();

        void on_posRadioButton_clicked();

        void on_m1Label_clicked(bool checked);

        void on_m2Label_clicked(bool checked);

        void on_m3Label_clicked(bool checked);

        void on_m4Label_clicked(bool checked);

        void on_m5Label_clicked(bool checked);

        void on_m6Label_clicked(bool checked);

        void on_m7Label_clicked(bool checked);

        void on_m8Label_clicked(bool checked);

        void on_m9Label_clicked(bool checked);

        void on_m10Label_clicked(bool checked);

        void on_m11Label_clicked(bool checked);

        void on_m12Label_clicked(bool checked);

        void on_m13Label_clicked(bool checked);

        void on_m14Label_clicked(bool checked);

        void on_m15Label_clicked(bool checked);

        void on_m16Label_clicked(bool checked);

        void on_m17Label_clicked(bool checked);

        void on_m18Label_clicked(bool checked);

        void on_m19Label_clicked(bool checked);

        void on_m20Label_clicked(bool checked);

        void on_m21Label_clicked(bool checked);

        void on_m22Label_clicked(bool checked);

        void on_m23Label_clicked(bool checked);

        void on_m24Label_clicked(bool checked);


private:
    Ui::MUL8_MainView *ui;
    QCheckBox *motorLabels[25];
};



#endif // MAINWINDOW_H
