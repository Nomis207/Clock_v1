#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QWidget>
#include <QTimer>
#include <QPaintEvent>
#include <QColor>

class AnalogClock : public QWidget
{
    Q_OBJECT
public:
    explicit AnalogClock(QWidget *parent = nullptr);

    //set colors for analog clock (themes)
    void setColors(QColor h, QColor m, QColor s, QColor otl, QColor hm, QColor mm);

signals:

private slots:

private:
    //analog clock theme colours
    QTimer *clockTimer;
    QColor secondsColor;
    QColor minutesColor;
    QColor hoursColor;
    QColor outlineColor;
    QColor hourmarkColor;
    QColor minutemarkColor;

protected:
    void paintEvent(QPaintEvent *event) override;

};

#endif // ANALOGCLOCK_H
