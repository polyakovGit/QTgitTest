#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{}

bool Widget::event(QEvent *e)
{
    if (e->type() == QEvent::KeyPress) {
        qDebug() << "Нажата кнопка";
        QKeyEvent *k = static_cast<QKeyEvent *>(e);
        qDebug() << "code: " << k->key() << "Text: " << k->text();
    } else if (e->type() == QEvent::Close)
        qDebug() << "Window Closed";
    else if (e->type() == QEvent::MouseButtonPress) {
        qDebug() << "Click Mouse";
        QMouseEvent *m = static_cast<QMouseEvent *>(e);
        qDebug() << "coordinates: " << m->position();
    }
}

Widget::~Widget() {}
