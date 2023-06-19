#ifndef WIDGET_H
#define WIDGET_H

#include <QKeyEvent>
#include <QLabel>
#include <QMouseEvent>
#include <QPushButton>
#include <QTime>
#include <QTimer>
#include <QVBoxLayout>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    bool event(QEvent *e) override;
};
#endif // WIDGET_H
