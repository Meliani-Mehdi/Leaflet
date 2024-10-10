#include "leaflet.h"
#include "./ui_leaflet.h"

Leaflet::Leaflet(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Leaflet)
{
    ui->setupUi(this);
}

Leaflet::~Leaflet()
{
    delete ui;
}
