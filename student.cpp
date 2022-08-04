#include "student.h"

Student::Student(int _age, QString _name, QString _lastName)
    : age(_age), name(_name), lastName(_lastName)
{}

QString Student::getName()
{
    return this->name;
}

QString Student::getLastName()
{
    return this->lastName;
}
