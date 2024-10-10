#ifndef LEAFLET_H
#define LEAFLET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Leaflet;
}
QT_END_NAMESPACE

class Leaflet : public QMainWindow
{
    Q_OBJECT

public:
    Leaflet(QWidget *parent = nullptr);
    ~Leaflet();

private:
    Ui::Leaflet *ui;
};
#endif // LEAFLET_H
