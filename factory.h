#ifndef FACTORY_H
#define FACTORY_H

#include <QString>

class Factory
{
public:
    Factory();
    Factory(Factory &factory);
    ~Factory();
    virtual QString getGreen() = 0;
    virtual QString getToppings() = 0;
    virtual QString getDressing() = 0;
    virtual QString getImage() = 0;
};

#endif // FACTORY_H
