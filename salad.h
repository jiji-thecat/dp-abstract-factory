#ifndef SALAD_H
#define SALAD_H

#include <QString>

class Salad
{
public:
    Salad(QString bowl);
    Salad(Salad &salad);
    ~Salad();

    void addGreen(QString green);
    void addToppings(QString toppings);
    void addDressing(QString dressing);
    void addImage(QString image);
    QString getImage();

private:
    QString bowl;
    QString green;
    QString toppings;
    QString dressing;
    QString image;
};

#endif // SALAD_H
