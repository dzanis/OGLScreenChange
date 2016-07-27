#ifndef TRIANGLE_H
#define TRIANGLE_H


#include "screen.h"





class Triangle : public Screen
{
public:
    Triangle();
    virtual ~Triangle();
    virtual void initializeGL();
    virtual void resizeGL(int width, int height);
    virtual void paintGL();
    virtual bool isInit() const { return init; } ;

protected:

private:
    bool init;


};

#endif // TRIANGLE_H
