#include "rect.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>

Rect::Rect()
{

}

void Rect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QColor("#055523"));
    if (option->state & QStyle::State_MouseOver){
        painter->setBrush(QColor("#022523"));
    }
    painter->drawRect(option->rect);
}
