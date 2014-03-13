#ifndef QTRIPPLANNER_H
#define QTRIPPLANNER_H

#include <QDialog>

namespace Ui {
class QTripPlanner;
}

class QTripPlanner : public QDialog
{
    Q_OBJECT

public:
    explicit QTripPlanner(QWidget *parent = 0);
    ~QTripPlanner();

private:
    Ui::QTripPlanner *ui;
};

#endif // QTRIPPLANNER_H
