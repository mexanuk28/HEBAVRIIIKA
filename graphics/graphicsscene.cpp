#include "graphicsscene.h"

#include <QGraphicsRectItem>

GraphicsScene::GraphicsScene(QObject* parent) : QGraphicsScene(parent)
{
//    setMouseTracking(true);
//    setAttribute(Qt::WA_Hover);
}

void GraphicsScene::paint(int r)
{
    addEllipse(QRect(0,0,r,r));

}



void GraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event){
    qDebug()<<event->scenePos();
}

void GraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){
    this->addRect(QRect(event->scenePos().x(), event->scenePos().y(), 2, 2));
}
