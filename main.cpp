#include <QApplication>
#include <QLabel>

#ifndef QT_NO_OPENGL
#include "runtime/mainrender.h"
#endif





int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

#ifndef QT_NO_OPENGL
    MainRender render;
   render.show();
#else
    QLabel note("OpenGL Support required");
    note.show();
#endif
    return app.exec();
}
