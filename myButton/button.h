#pragma once
#include <QApplication>
#include <QPushButton>
#include <QPixmap>
#include <iostream>
#include <QPainter>
#include <QPaintEvent>
#include <QMediaPlayer>
#include <QFileDialog>


class ImageButton : public QPushButton {
    //Q_OBJECT
    QPixmap currentButtonPixmap;
    QPixmap buttonDownPixmap;
    QPixmap buttonUpPixmap;
    bool isDown = false;
public:
    ImageButton() = default;
    ImageButton(QWidget *parent);
    void paintEvent(QPaintEvent *e) override;
    void keyPressEvent(QKeyEvent *e) override;

public slots:
            void setButton();
};
