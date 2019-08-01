#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <string>

namespace my_study
{
// 所有饮料的基类
class IBeverage
{
public:
    virtual std::string Name() = 0;  // 名称
    virtual double Cost() = 0;  // 价钱
};
}

#endif // _COMPONENT_H_

// copy from https://blog.csdn.net/liang19890820/article/details/66973836