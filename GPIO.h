#ifndef GPIO_H
#define GPIO_H
#include<QObject>
#include<QDebug>
class GPIO:public QObject{
    Q_OBJECT
public:
    explicit GPIO(QObject *parent = nullptr);
    Q_INVOKABLE void showInfo();
};

#endif // GPIO_H
