#include "quad.h"
#include <QDebug>
Quad::Quad()
{

}

Quad::~Quad()
{
    delete texture;
}


void Quad::initializeGL()
{
   glClearColor(1,0,0,1);

   texture = new QOpenGLTexture(QImage(":/box.gif").mirrored());

   qDebug() << "Quad::initializeGL" ;

   init = true;

}

void Quad::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);// Sets the current view port to the new size.
}

void Quad::paintGL()
{
    //glClearColor(1,0,0,1);
    //clear color and depth buffer
     glClear(GL_COLOR_BUFFER_BIT );
     glEnable( GL_TEXTURE_2D );
        texture->bind();
     glBegin(GL_QUADS);                      // Draw A Quad
          glTexCoord2d(0.0,0.0);  glVertex3f(-0.5f, 0.5f, 0.0f);              // Top Left
          glTexCoord2d(1.0,0.0);  glVertex3f( 0.5f, 0.5f, 0.0f);              // Top Right
          glTexCoord2d(1.0,1.0);  glVertex3f( 0.5f,-0.5f, 0.0f);              // Bottom Right
          glTexCoord2d(0.0,1.0);  glVertex3f(-0.5f,-0.5f, 0.0f);              // Bottom Left
        glEnd();
      texture->release();
      glDisable(GL_TEXTURE_2D);
}


