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

    const QString& getName();
    const QString& getLastName();
};

#endif // STUDENT_H
