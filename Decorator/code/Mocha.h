#ifndef _MOCHA_H_
#define _MOCHA_H_

#include "Beverage.h"

class Mocha : public Beverage 
{
public:
    Mocha(Beverage *beverage)
    {
        this->beverage_ = beverage;
    };
    std::string GetDescription() override
    {
        return beverage_->GetDescription() + ", Mocha";
    };
    double cost() override 
    {
        return .20 + beverage_->cost();
    };
private:
    Beverage *beverage_;
};

#endif
