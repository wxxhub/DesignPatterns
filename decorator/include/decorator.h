#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include "component.h"

namespace my_study
{
// 调味品
class CondimentDecorator : public IBeverage
{
public :
    CondimentDecorator(IBeverage *beverage) : m_pBeverage(beverage) {}

    std::string Name() 
    {
        return m_pBeverage->Name();
    }

    double Cost() 
    {
        return m_pBeverage->Cost();
    }

protected :
    IBeverage *m_pBeverage;
} ;
}
#endif // _DECORATOR_H_

//copy from https://blog.csdn.net/liang19890820/article/details/66973836 
