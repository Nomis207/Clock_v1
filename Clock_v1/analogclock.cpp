#include "analogclock.h"
#include <QPainter>
#include <QTime>
#include <QPen>

AnalogClock::AnalogClock(QWidget *parent)
    : QWidget{parent}
    , hoursColor(Qt::black)
    , minutesColor(Qt::black)
    , secondsColor(Qt::red)
    , outlineColor(Qt::black)
    , hourmarkColor(Qt::black)
    , minutemarkColor(Qt::black)
{
    clockTimer = new QTimer(this);
    connect(clockTimer, &QTimer::timeout, this, QOverload<>::of(&QWidget::update));
    clockTimer->start(1000);
}

void AnalogClock::paintEvent(QPaintEvent *event)
{
    //calculate angel
    QTime time = QTime::currentTime();
    double sekundenWinkel = 6.0 * time.second();
    double minutenWinkel = 6.0 * time.minute();
    double stundenWinkel = 30.0 * time.hour() + 30.0 * (time.minute() / 60.0);


    //set pens
    QPen outlinePen(outlineColor, 4);
    QPen hourmarkPen(hourmarkColor, 3);
    QPen minutemarkPen(minutemarkColor,1);
    QPen secondPen(secondsColor, 2);
    QPen minutePen(minutesColor, 4);
    QPen hourPen  (hoursColor, 6);


    //paint the clock
    QPainter painter(this);
    painter.translate(width()/2, height()/2);

    //outline
    painter.setPen(outlinePen);
    painter.drawEllipse(QPoint (0, 0), 90, 90);

    //hourmarks
    painter.save();
    painter.setPen(hourmarkPen);
    for (int i = 0; i < 12; i++) {
        painter.drawLine(0, -80, 0, -90);
        painter.rotate(30);
    }
    painter.restore();

    //minutemarks
    painter.save();
    painter.setPen(minutemarkPen);
    for (int i = 0; i < 60; i++) {
        painter.drawLine(0, -85, 0, -90);
        painter.rotate(6);
    }
    painter.restore();


    //seconds
    painter.setPen(secondPen);
    painter.save();              // save current state
    painter.rotate(sekundenWinkel);      // Koordinatensystem rotate
    painter.drawLine(0, 0, 0, -60);  //draw
    painter.restore();           // reset for next Zeiger

    //minutes
    painter.setPen(minutePen);
    painter.save();
    painter.rotate(minutenWinkel);
    painter.drawLine(0, 0, 0, -50);
    painter.restore();

    //hours
    painter.setPen(hourPen);
    painter.save();
    painter.rotate(stundenWinkel);
    painter.drawLine(0, 0, 0, -40);
    painter.restore();
}

//set colors for analog clock
void AnalogClock::setColors(QColor h, QColor m, QColor s, QColor otl, QColor hm, QColor mm){
    hoursColor = h;
    minutesColor = m;
    secondsColor = s;
    outlineColor = otl;
    hourmarkColor = hm;
    minutemarkColor = mm;

    update();
}
