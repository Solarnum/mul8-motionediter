#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void populateMotionList();

    void on_removeMotionFromListButton_clicked();

    void on_addMotionToListButton_clicked();

    void on_checkBox_toggled(bool checked);

    void on_playMotionButton_clicked();

    QList<QString> createQListString(QString key);

    void on_clearListButton_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
