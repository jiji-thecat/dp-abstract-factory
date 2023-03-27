#include "vegetable-salad-factory.h"

VegetableSaladFactory::VegetableSaladFactory()
{

}

VegetableSaladFactory::VegetableSaladFactory(VegetableSaladFactory &vegetableSaladFactory)
{

}

VegetableSaladFactory::~VegetableSaladFactory()
{

}

QString VegetableSaladFactory::getGreen(){
    return "lettuce";
}

QString VegetableSaladFactory::getToppings(){
    return "tomato";
}

QString VegetableSaladFactory::getDressing(){
    return "goma";
}

QString VegetableSaladFactory::getImage(){
    return "vegetable-salad.png";
}
