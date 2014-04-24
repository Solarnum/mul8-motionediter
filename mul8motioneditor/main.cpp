#include "mul8_mainview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MUL8_MainView w;
    w.show();

    return a.exec();
}
