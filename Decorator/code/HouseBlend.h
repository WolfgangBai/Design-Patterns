#ifndef _HOUSEBLEND_H_
#define _HOUSEBLEND_H_

#include "Beverage.h"
class HouseBlend : public Beverage 
{
public:
    HouseBlend() : desc_("HouseBlend"){};
    double cost() override
    {
        return 1.99; 
    };
};



#endif
