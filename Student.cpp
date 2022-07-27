#include "Student.h"
#include <QDebug>
Student::Student()
{

}

void Student::setName(const QString name)
{
    this->name = name;
}

QString Student::getName()const
{
    return this->name;
}

void Student::showInfo()
{
    Person::showInfo();
    qDebug()<<this->name;
}
