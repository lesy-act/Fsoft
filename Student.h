#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <QString>
class Student:public Person
{
private:
    QString name;
public:
    Student();
    Student(unsigned int age, unsigned int id, QString name):Person(age,id)
    {
        this->name = name;
    }
    void setName(const QString name);
    QString getName()const;
    void showInfo()override;
};

#endif // STUDENT_H
