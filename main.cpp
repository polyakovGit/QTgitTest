//#include "widget.h"

#include <QApplication>
#include <QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.setWindowTitle("TITLE");
    w.resize(300,70);
    w.show();
    return a.exec();
}
