#ifndef MAINDATA_H
#define MAINDATA_H

#include <QList>
#include <discipline.h>
#include <student.h>

class MainData
{
private:
    static MainData* instance;

    QList<Discipline> discList;
    QList<Student> studList;
public:    
    MainData();

    bool mainLoader();
    bool addDisc(Discipline&);
    bool addStud(Student&);

    const MainData& getInstance();
};

#endif // MAINDATA_H
