#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
class Employee:public Person
{
private:
    double salary;
public:
    Employee();
    Employee(unsigned int age, unsigned int id,double salary):Person(age, id)
    {
        this->salary = salary;
    };
    void setSalary(const double &salary);
    double getSalary()const;
    void showInfo()override;
};

#endif // EMPLOYEE_H
