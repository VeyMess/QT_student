#include "maindata.h"
#include <QException>

MainData::MainData()
{
    if(instance == nullptr)
        return ;

    mainLoader();
    instance = this;
}

MainData* MainData::instance = nullptr;

bool MainData::mainLoader()
{
    //Заглушка
    return true;
}

bool MainData::addDisc(Discipline& disc)
{
    try
    {
        this->discList.push_back(disc);
        return true;
    }
    catch(QException& e)
    {
        return false;
    }
}

bool MainData::addStud(Student& stud)
{
    try
    {
        this->studList.push_back(stud);
        return true;
    }
    catch(QException& e)
    {
        return false;
    }
}

const MainData& MainData::getInstance()
{
    return *instance;
}
