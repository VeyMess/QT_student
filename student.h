#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
private:
    int age;
    QString name;
    QString lastName;
public:
    Student(int, QString, QString);

    QString getName();
    QString getLastName();
};

#endif // STUDENT_H
