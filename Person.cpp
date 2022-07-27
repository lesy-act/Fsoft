#include "Person.h"
#include <QDebug>
Person::Person(){};
Person::Person(unsigned int age, unsigned int id)
{
    this->age = age;
    this->id = id;
}

void Person::showInfo()
{
    qDebug()<<this->age<<"  "<<this->id;

}
