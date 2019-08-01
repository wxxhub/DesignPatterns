// concrete_component.h
#ifndef _CONCRETE_COMPONENT_H_
#define _CONCRETE_COMPONENT_H_

#include "component.h"

/********** 具体的饮料（咖啡）**********/
namespace my_study
{
// 黑咖啡，属于混合咖啡
class HouseBlend : public IBeverage
{
public:
    std::string Name() 
    {
        return "HouseBlend";
    }

    double Cost() 
    {
        return 30.0;
    }
};

// 深度烘培咖啡豆
class DarkRoast : public IBeverage
{
public:
    std::string Name() 
    {
        return "DarkRoast";
    }

    double Cost() 
    {
        return 28.5;
    }
};
}
#endif // _CONCRETE_COMPONENT_H_

// copy from https://blog.csdn.net/liang19890820/article/details/66973836 