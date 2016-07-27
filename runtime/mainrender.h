#ifndef MAINRENDER_H
#define MAINRENDER_H

#ifdef _DEBUG
   #include <QDebug>
#endif

#include <QOpenGLWidget>
#include <QOpenGLFunctions>

#include <QKeyEvent>

#include "screen.h"

#include "triangle.h"
#include "quad.h"

namespace Ui {
class MainRender;
}

class MainRender :public QOpenGLWidget , protected QOpenGLFunctions
{

    Q_OBJECT

public:
    explicit MainRender(QWidget *parent = 0);
    ~MainRender();

    Screen *triangle ;
    Screen *quad ;

    void setScreen(Screen *newScreen);
protected:
    Screen *screen;
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

    void keyPressEvent(QKeyEvent *event);
private:
    Ui::MainRender *ui;
    bool initGL;

};

#endif // MAINRENDER_H
