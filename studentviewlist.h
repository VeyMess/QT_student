#ifndef STUDENTVIEWLIST_H
#define STUDENTVIEWLIST_H

#include <QWidget>

namespace Ui {
class StudentViewList;
}

class StudentViewList : public QWidget
{
    Q_OBJECT

public:
    explicit StudentViewList(QWidget *parent = nullptr);
    ~StudentViewList();

private:
    Ui::StudentViewList *ui;
};

#endif // STUDENTVIEWLIST_H
