#ifndef DESCIPLINE_H
#define DESCIPLINE_H

#include <QString>
#include <QMap>
#include <quarteldate.h>

class descipline
{
private:
    int Id;
    QString name;
    QMap<QuartelDate,int> gradeMap;
public:
    descipline(int,QString);
    QString getName();
    int getId();
};

#endif // DESCIPLINE_H
