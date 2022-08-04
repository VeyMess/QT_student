#ifndef QUARTELDATE_H
#define QUARTELDATE_H

#include <QString>

class QuartelDate
{
public:
    enum Quart
    {
        Q1,
        Q2,
        Q3,
        Q4
    };
private:
    int year;
    Quart quartel;
public:
    QuartelDate(const int,const Quart&);
    Quart getQuartel();
    int getYear();
    QString getDate();
    static QString qToQs(const Quart&);

    friend bool operator == (QuartelDate&, QuartelDate&);
};

#endif // QUARTELDATE_H
