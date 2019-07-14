#include "Pizza.h"


void Pizza::Prepare()
{
    std::cout <<  "Preparing " << name_ << std::endl;

}

void Pizza::Bake()
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::Cut()
{
    std::cout << "Cutting the Pizza into diagonal slices" << std::endl;
}

void Pizza::Box()
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

