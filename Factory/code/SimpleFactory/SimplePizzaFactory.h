#ifndef _SIMPLE_PIZZA_FACTORY_H_
#define _SIMPLE_PIZZA_FACTORY_H_
#include "CheesePizza.h"
#include "ClamPizza.h"
class SimplePizzaFactory
{
public:
    static Pizza * CreatePizza(std::string type);

};

#endif
