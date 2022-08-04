#include "student.h"

Student::Student(int _age, QString _name, QString _lastName)
    : age(_age), name(_name), lastName(_lastName)
{}

const QString& Student::getName()
{
    return this->name;
}

const QString& Student::getLastName()
{
    return this->lastName;
}
