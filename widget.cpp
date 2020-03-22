#include "widget.h"
#include "ui_widget.h"

#include "qpainter.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter;
    QPen pen(Qt::red);

    painter.begin(this);    // start drawing

    painter.setPen(pen);
    painter.drawLine(0, ui->draw_here_widget->height(), width(), ui->draw_here_widget->height());  // line

    painter.end();      // close Paint device

}

