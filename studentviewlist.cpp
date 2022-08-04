#include "studentviewlist.h"
#include "ui_studentviewlist.h"

StudentViewList::StudentViewList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StudentViewList)
{
    ui->setupUi(this);
}

StudentViewList::~StudentViewList()
{
    delete ui;
}
