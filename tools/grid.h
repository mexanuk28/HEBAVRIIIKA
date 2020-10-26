#ifndef GRID_H
#define GRID_H

#include <QGraphicsItem>

class Grid : public QGraphicsItem
{
public:
    Grid(QRect rect);

    // QGraphicsItem interface
public:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void setXt(const qreal &value) { xt = value; }
    void setXb(const qreal &value) { xb = value; }
    void setYl(const qreal &value) { yl = value; }
    void setYr(const qreal &value) { yr = value; }

private:
    qreal xt;
    qreal xb;

    qreal yl;
    qreal yr;

};

#endif // GRID_H
