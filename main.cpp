#include "youtubeplayer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YouTubePlayer w;
    w.show();

    return a.exec();
}
