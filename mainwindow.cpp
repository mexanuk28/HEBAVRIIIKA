#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "graphics/graphicsscene.h"
#include "primitives/rect.h"
#include "tools/grid.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::showEvent(QShowEvent *event){
    GraphicsScene* scene = new GraphicsScene;
    ui->graphicsView->setScene(scene);

    ui->graphicsView->setMouseTracking(true);
    ui->graphicsView->setAttribute(Qt::WA_Hover);
//    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
    QRect rect = ui->graphicsView->viewport()->rect();
    Grid* grid = new Grid(QRect(0,0, 1000, 1000));
    grid->setPos(-1000/2, -1000/2);
    scene->addItem(grid);

}

void MainWindow::on_actionAddPoint_triggered()
{

}
