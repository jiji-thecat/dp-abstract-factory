#include "reishabu-salad-factory.h"

ReishabuSaladFactory::ReishabuSaladFactory()
{

}

ReishabuSaladFactory::ReishabuSaladFactory(ReishabuSaladFactory &reishabuSaladFactory)
{

}

ReishabuSaladFactory::~ReishabuSaladFactory()
{

}

QString ReishabuSaladFactory::getGreen(){
    return "lettuce";
}

QString ReishabuSaladFactory::getToppings(){
    return "pork";
}

QString ReishabuSaladFactory::getDressing(){
    return "goma";
}

QString ReishabuSaladFactory::getImage(){
    return "reishabu-salad.png";
}
