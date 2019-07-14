#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <iostream>
#include <string>

class Pizza
{
public:
    Pizza() : name_("None") {};
    virtual ~Pizza() {};
    void Prepare();
    void Bake();
    void Cut();
    void Box();
    std::string GetName()
    {
        return name_;
    };
    void SetName(std::string name)
    {
        name_ = name; 
    }

private:
    std::string name_;
};

#endif
