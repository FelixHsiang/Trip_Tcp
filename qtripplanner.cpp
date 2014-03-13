#include "qtripplanner.h"
#include "ui_tripplanner.h"

QTripPlanner::QTripPlanner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QTripPlanner)
{
    ui->setupUi(this);
}

QTripPlanner::~QTripPlanner()
{
    delete ui;
}
