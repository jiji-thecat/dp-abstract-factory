#ifndef REISHABUSALADFACTORY_H
#define REISHABUSALADFACTORY_H

#include <QString>

class ReishabuSaladFactory
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
