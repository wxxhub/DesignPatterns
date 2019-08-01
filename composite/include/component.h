#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <iostream>
#include <string>

namespace my_study
{
class Component
{
public:
    Component(std::string name) : m_strName(name) {}
    virtual ~Component() {}
    virtual void Add(Component *cmpt) = 0;  // 添加构件
    virtual void Remove(Component *cmpt) = 0;  // 删除构件
    virtual Component* GetChild(int index) = 0;  // 获取构件
    virtual void Operation(int indent) = 0;  // 显示构件（以缩进的方式）

private:
    Component();  // 不允许

protected:
    std::string m_strName;
};
}
#endif // _COMPONENT_H_
//copy from https://blog.csdn.net/liang19890820/article/details/71240662 