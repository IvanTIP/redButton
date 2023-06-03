#include "button.h"

ImageButton::ImageButton(QWidget *parent) {
    setParent(parent);
    setToolTip("Stop");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    buttonUpPixmap = QPixmap(":pic/images/upButton.png");
    buttonDownPixmap = QPixmap(":pic/images/downButton.png");
    currentButtonPixmap = buttonUpPixmap;
    setGeometry(currentButtonPixmap.rect());
}

void ImageButton::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(),currentButtonPixmap);
}
void ImageButton::keyPressEvent(QKeyEvent *e) {
    setButton();
}
void ImageButton::setButton() {
    if (isDown) {
        currentButtonPixmap = buttonUpPixmap;
        isDown = false;
        update();
    } else {
        currentButtonPixmap = buttonDownPixmap;
        isDown = true;
        update();
    }
}
