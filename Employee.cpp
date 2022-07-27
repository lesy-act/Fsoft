#include "Employee.h"
#include <QDebug>
Employee::Employee()
{

}

void Employee::setSalary(const double &salary)
{
    this->salary = salary;
}

double Employee::getSalary()const
{
    return this->salary;
}

void Employee::showInfo()
{
    Person::showInfo();
    qDebug()<<this->salary;
}
