#ifndef SCREEN_H
#define SCREEN_H

#include <QOpenGLFunctions>

class Screen   // interface class Screen
{
  public:
   virtual ~Screen(){}; // у деструктора должно быть тело иначе компилятор ругается
   virtual void initializeGL() = 0;
   virtual void resizeGL(int width, int height) = 0;
   virtual void paintGL() = 0;
   virtual  bool isInit() const = 0;
};

#endif // SCREEN_H

