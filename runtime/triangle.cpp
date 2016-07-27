#include "triangle.h"
#include <QDebug>
Triangle::Triangle()
{

}

Triangle::~Triangle()
{

}


void Triangle::initializeGL()
{
    glClearColor(0,0,0,1);
    qDebug() << "Triangle::initializeGL";

    init = true;
}

void Triangle::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);// Sets the current view port to the new size.
}

void Triangle::paintGL()
{
    //clear color and depth buffer
     glClear(GL_COLOR_BUFFER_BIT );

     glBegin(GL_TRIANGLES);                      // Drawing Using Triangles
         glVertex3f( 0.0f, 0.5f, 0.0f);              // Top
         glVertex3f(-0.5f,-0.5f, 0.0f);              // Bottom Left
         glVertex3f( 0.5f,-0.5f, 0.0f);              // Bottom Right
         glEnd();
}


