#include "widget.h"

#include <QApplication>
#include <QColor>
#include <QLabel>
#include <QPalette>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    window.setWindowTitle("Обработчики");
    window.resize(350, 70);
    window.show();

    return app.exec();
}
