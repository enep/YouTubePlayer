#include "youtubeplayer.h"
#include "ui_youtubeplayer.h"

YouTubePlayer::YouTubePlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::YouTubePlayer)
{
    ui->setupUi(this);
}

YouTubePlayer::~YouTubePlayer()
{
    delete ui;
}
