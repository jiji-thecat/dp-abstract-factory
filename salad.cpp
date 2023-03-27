#include "salad.h"

Salad::Salad(QString bowl)
{

}

Salad::Salad(Salad &salad)
{

}

Salad::~Salad()
{

}

void Salad::addGreen(QString green)
{
    this->green = green;
}

void Salad::addToppings(QString toppings)
{
    this->toppings = toppings;
}

void Salad::addDressing(QString dressing)
{
    this->dressing = dressing;
}

void Salad::addImage(QString image)
{
    this->image = image;
}

QString Salad::getImage()
{
    return this->image;
}
