#include <widget.h>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    window.setWindowTitle("ООП стиль создания окна");
    window.resize(300, 70);
    window.show();
    return app.exec();
}
