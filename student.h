#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QMap>

class Student
{
private:
    static int studCount;

    int id;
    int age;
    QString name;
    QString lastName;
public:
    Student(int, QString, QString);

    const QString& getName();
    const QString& getLastName();
    int getAge();
    int getId();

    friend bool operator == (const Student&, const Student&);
};

#endif // STUDENT_H
