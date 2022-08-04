#include "quarteldate.h"

QuartelDate::QuartelDate(const int _year, const Quart& _quartel)
    : year(_year), quartel(_quartel)
{};

int QuartelDate::getYear()
{
    return year;
}

QuartelDate::Quart QuartelDate::getQuartel()
{
    return quartel;
}

QString QuartelDate::qToQs(const Quart& _quar)
{
    switch (_quar)
    {
    case Quart::Q1 : return "Q1";
    case Quart::Q2 : return "Q2";
    case Quart::Q3 : return "Q3";
    case Quart::Q4 : return "Q4";
    }
}

QString QuartelDate::getDate()
{
    return QString(getYear()) + " " + qToQs(getQuartel());
}

bool operator == (QuartelDate& other, QuartelDate& other2)
{
    return (other.year == other2.year) && (other.quartel == other2.quartel);
}
