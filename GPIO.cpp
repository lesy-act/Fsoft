#include"GPIO.h"
GPIO::GPIO(QObject *parent):QObject(parent)
{
    qDebug()<<"GPIO contructor!";
}
void GPIO::showInfo()
{
    qDebug()<<"hello this is show info func!";
}
