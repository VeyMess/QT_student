#ifndef DISCIPLINE_H
#define DISCIPLINE_H

#include <QString>
#include <QMap>
#include <quarteldate.h>
#include <student.h>

class Discipline
{
private:
    static int disCounter;

    int id;
    QString name;
    QMap<int,QMap<QuartelDate,int>> gradeMap;

public:
    Discipline(QString&);
    const QString& getName();
    int getId();

    bool getStudentGrades(Student&, QMap<QuartelDate,int>&);
    bool hasStudent(Student&);
    bool hasGrade(Student&, QuartelDate&);

    bool addGrade(Student&, QuartelDate&, int);
    bool changeGrade(Student&, QuartelDate&, int);
};

#endif // DISCIPLINE_H
