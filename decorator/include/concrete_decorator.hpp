#ifndef _CONCRETE_DECORATOR_H_
#define _CONCRETE_DECORATOR_H_

#include "decorator.h"

/********** 具体的饮料（调味品）**********/
namespace my_study
{
// 奶油
class Cream : public CondimentDecorator
{
public:
    Cream(IBeverage *beverage) : CondimentDecorator(beverage) {}

    std::string Name() 
    {
        return m_pBeverage->Name() + " Cream";
    }

    double Cost() 
    {
        return m_pBeverage->Cost() + 3.5;
    }
};

// 摩卡
class Mocha : public CondimentDecorator
{
public:
    Mocha(IBeverage *beverage) : CondimentDecorator(beverage) {}

    std::string Name() 
    {
        return m_pBeverage->Name() + " Mocha";
    }

    double Cost() 
    {
        return m_pBeverage->Cost() + 2.0;
    }
};

// 糖浆
class Syrup : public CondimentDecorator
{
public:
    Syrup(IBeverage *beverage) : CondimentDecorator(beverage) {}

    std::string Name() 
    {
        return m_pBeverage->Name() + " Syrup";
    }

    double Cost() 
    {
        return m_pBeverage->Cost() + 3.0;
    }
};
}
#endif // _CONCRETE_DECORATOR_H_
//copy from https://blog.csdn.net/liang19890820/article/details/66973836 