#include "student.h"

Student::Student(int _age ,QString _name, QString _lastName)
    : id( ++studCount), age(_age), name(_name), lastName(_lastName)
{};

int Student::studCount = 0;

const QString& Student::getName()
{
    return this->name;
}

const QString& Student::getLastName()
{
    return this->lastName;
}

int Student::getAge()
{
    return this->age;
}
int Student::getId()
{
    return this->id;
}

bool operator == (const Student& first, const Student& second)
{
    return first.id == second.id;
}
