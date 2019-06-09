#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>
#include <iostream>

class Beverage 
{
public:
    virtual std::string GetDescription(){ return desc_;};
    virtual double cost() = 0;
protected:
    std::string desc_;
};

#endif
