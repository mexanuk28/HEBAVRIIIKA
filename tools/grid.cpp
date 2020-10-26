#include "grid.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>

Grid::Grid(QRect rect)
{
    xt = rect.width()/2;
    xb = rect.width()/2;
    yl = rect.height()/2;
    yr = rect.height()/2;
}

QRectF Grid::boundingRect() const
{
    return QRectF(0,0, xb*2,yr*2);
}


void Grid::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->save();
//    painter->drawRect(option->rect);

    QPen pen = painter->pen();
    pen.setColor(QColor("#ff0000"));
    pen.setWidth(5);
    painter->setPen(pen);
    QLineF oY = QLineF(QPointF(xt,0), QPointF(xb, yl*2));
    pen.setColor(QColor("#ff0000"));
    QLineF oX = QLineF(QPointF(0,yl), QPointF(xt*2,yr));
    painter->drawLine(oY);
    painter->drawLine(oX);
    painter->restore();

}

