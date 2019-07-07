#include "SimplePizzaFactory.h"

Pizza * SimplePizzaFactory::CreatePizza(std::string type)
{
    Pizza *p = nullptr;
    if (type == "cheese") {
        p = new CheesePizza();
    } else if (type == "clam"){
        p = new ClamPizza();
    }
    return p;
}
