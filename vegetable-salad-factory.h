#ifndef VEGETABLESALAD_H
#define VEGETABLESALAD_H

#include "factory.h"

class VegetableSaladFactory : public Factory
{
public:
    VegetableSaladFactory();
    VegetableSaladFactory(VegetableSaladFactory &vegetableSaladFactory);
    ~VegetableSaladFactory();
    QString getGreen();
    QString getToppings();
    QString getDressing();
    QString getImage();
};

#endif // VEGETABLESALAD_H
