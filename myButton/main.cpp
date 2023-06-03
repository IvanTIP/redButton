#include <QApplication>
#include "button.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ImageButton redButton(nullptr);
    redButton.setFixedSize(500,500);
    redButton.move(1000,400);
    auto *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("../myButton/sounds/buttonSound.mp3"));
    player->setVolume(75);
    QObject::connect(&redButton, &QPushButton::clicked, &redButton, &ImageButton::setButton);
    QObject::connect(&redButton, &QPushButton::clicked,[&player](){player->play();});
    redButton.show();
    return QApplication::exec();
}
