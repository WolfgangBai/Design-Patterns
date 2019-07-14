#ifndef _NY_STYLE_PIZZA_H_
#define _NY_STYLE_PIZZA_H_

#include "PizzaStore.h"
#include "CheesePizza.h"
#include "ClamPizza.h"


class NYStylePizzaStore : public PizzaStore
{
public:
    Pizza * CreatePizza(std::string type)
    {
        Pizza *p = nullptr;
        if (type == "cheese") {
            p = new CheesePizza();
        } else if (type == "clam"){
            p = new ClamPizza();
        }
        return p;
    };

};
#endif
