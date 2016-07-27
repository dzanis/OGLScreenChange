#include "mainrender.h"
#include "ui_mainrender.h"


MainRender::MainRender(QWidget *parent) :
    QOpenGLWidget(parent),
     ui(new Ui::MainRender)
{
    ui->setupUi(this);
    triangle = new Triangle();
    quad = new Quad();
}

MainRender::~MainRender()
{
    delete triangle;
    delete quad;
}


 void MainRender::setScreen(Screen * newScreen ){

       screen = newScreen;// предаю newScreen который будет рендится
       if(!screen->isInit())
       screen->initializeGL();// вызов инициализации только один раз
       }

void MainRender::initializeGL()
{

    initializeOpenGLFunctions();

    setScreen(triangle);

}

void MainRender::resizeGL(int width, int height)
{
        screen->resizeGL(width, height);
}

void MainRender::paintGL()
{
        screen->paintGL();
}

void MainRender::keyPressEvent(QKeyEvent *event){
    switch (event->key()) {

    case Qt::Key_Escape:
        close();
        break;
    case Qt::Key_F1:
        setWindowState(windowState() ^ Qt::WindowFullScreen);
        break;

    case Qt::Key_C:

        if(screen == triangle)
        setScreen(quad);       
        else
           setScreen(triangle);
        update();
        break;


    }




}



