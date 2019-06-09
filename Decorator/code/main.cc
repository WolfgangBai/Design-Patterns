#include "Espresso.h"
#include "Mocha.h"

int main(void)
{
    Beverage *beverage = new Espresso();
    
    Beverage *beverage2 = new Mocha(beverage);
    beverage2 = new Mocha(beverage2);

    std::cout << beverage2->GetDescription() << " $" <<  beverage2->cost() << std::endl;

}
