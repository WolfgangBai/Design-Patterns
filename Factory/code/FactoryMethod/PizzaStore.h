#ifndef _PIZZA_STORE_
#define _PIZZA_STORE_
#include "Pizza.h"

class PizzaStore
{
public:
    Pizza *OrderPizza(std::string type);
    ~PizzaStore()
    {
        std::cout << "free PizzaStore: " << this << std::endl;
    }
    virtual Pizza *CreatePizza(std::string type) =0;
};


#endif
