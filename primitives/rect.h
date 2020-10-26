#ifndef RECT_H
#define RECT_H

#include <QGraphicsRectItem>

class Rect : public QGraphicsRectItem
{
public:
    Rect();

    // QGraphicsItem interface
public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // RECT_H
