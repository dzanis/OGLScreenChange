#ifndef QUAD_H
#define QUAD_H

#include <QOpenGLTexture>
#include <QImage>

#include "screen.h"

class Quad : public Screen
{
public:
    Quad();
    virtual ~Quad();
    virtual void initializeGL() ;
    virtual void resizeGL(int width, int height);
    virtual void paintGL();
    virtual bool isInit() const { return init; } ;
private:
    bool init;
    QOpenGLTexture *texture;

};

#endif // QUAD_H
