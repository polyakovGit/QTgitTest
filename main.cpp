#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Первая программа на Qt");
    window.resize(300, 70);
    QLabel *label = new QLabel("<center>Привет, мир!</center>");
    QPushButton *btnQuit = new QPushButton("&Закрыть окно");
    QVBoxLayout *vbox = new QVBoxLayout();
    vbox->addWidget(label);
    vbox->addWidget(btnQuit);
    window.setLayout(vbox);
    QObject::connect(btnQuit, SIGNAL(clicked()),
                     &app, SLOT(quit()));
    window.show();
    return app.exec();
}
