#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>
#include <QObject>

class GraphicsView : public QGraphicsView
{
public:
    GraphicsView();


    // QWidget interface
protected:
    void resizeEvent(QResizeEvent *event);
};

#endif // GRAPHICSVIEW_H
