#ifndef PERSON_H
#define PERSON_H
class Person{
public:
    unsigned int age;
    unsigned int id;
public:
    Person();
    Person(unsigned int age, unsigned int id);
    virtual void showInfo();
};

#endif // PERSON_H
