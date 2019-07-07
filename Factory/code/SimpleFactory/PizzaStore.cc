#include "PizzaStore.h"

Pizza *PizzaStore::OrderPizza(std::string type)
{
    Pizza *p;

    p = SimplePizzaFactory::CreatePizza(type);
    p->Prepare();
    p->Bake();
    p->Cut();
    p->Box();
    return p;
}
