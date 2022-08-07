#include "discipline.h"

Discipline::Discipline(QString& _name)
    : id(++disCounter), name(_name)
{};

int Discipline::disCounter = 0;

const QString& Discipline::getName()
{
    return name;
}

int Discipline::getId()
{
    return id;
}

bool Discipline::getStudentGrades(Student& stud, QMap<QuartelDate,int>& retMap)
{
    if(this->gradeMap.contains(stud.getId()))
    {
        retMap = gradeMap[stud.getId()];
        return true;
    }
    else
        return false;
}

bool Discipline::hasStudent(Student& stud)
{
    return gradeMap.contains(stud.getId());
}

bool Discipline::hasGrade(Student& stud, QuartelDate& time)
{
    if(hasStudent(stud))
        return gradeMap[stud.getId()].contains(time);
    else
        return false;
}

bool Discipline::addGrade(Student& stud, QuartelDate& time, int _grade)
{
    if(!hasStudent(stud) || hasGrade(stud,time))
        return false;

    gradeMap[stud.getId()][time] = _grade;
    return true;
}

bool Discipline::changeGrade(Student& stud, QuartelDate& time, int _grade)
{
    if(!hasGrade(stud,time))
        return false;

    gradeMap[stud.getId()][time] = _grade;
    return true;
}
