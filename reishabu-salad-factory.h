#ifndef REISHABUSALADFACTORY_H
#define REISHABUSALADFACTORY_H

#include <QString>

#include "factory.h"

class ReishabuSaladFactory : public Factory
{
public:
    ReishabuSaladFactory();
    ReishabuSaladFactory(ReishabuSaladFactory &reishabuSaladFactory);
    ~ReishabuSaladFactory();
    QString getGreen();
    QString getToppings();
    QString getDressing();
    QString getImage();
};

#endif // REISHABUSALADFACTORY_H
