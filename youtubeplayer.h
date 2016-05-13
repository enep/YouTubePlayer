#ifndef YOUTUBEPLAYER_H
#define YOUTUBEPLAYER_H

#include <QMainWindow>

namespace Ui {
class YouTubePlayer;
}

class YouTubePlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit YouTubePlayer(QWidget *parent = 0);
    ~YouTubePlayer();

private:
    Ui::YouTubePlayer *ui;
};

#endif // YOUTUBEPLAYER_H
