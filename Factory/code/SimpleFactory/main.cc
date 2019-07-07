#include "PizzaStore.h"

int main()
{
    Pizza *p; 
    PizzaStore *pizza_store;
    
    pizza_store = new PizzaStore();
    p = pizza_store->OrderPizza("cheese");

    delete pizza_store;
    delete p;
}
