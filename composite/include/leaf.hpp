#ifndef _LEAF_HPP_
#define _LEAF_HPP_

#include "component.h"
namespace my_study
{
class Leaf : public Component
{
public:
    Leaf(std::string name) : Component(name){}
    virtual ~Leaf(){}
    void Add(Component *cmpt) 
    {
        std::cout << "Can't add to a Leaf" << std::endl;
    }
    void Remove(Component *cmpt) 
    {
        std::cout << "Can't remove from a Leaf" << std::endl;
    }
    Component* GetChild(int index) 
    {
        std::cout << "Can't get child from a Leaf" << std::endl;
        return NULL;
    }
    void Operation(int indent) 
    {
        std::string newStr(indent, '-');
        std::cout << newStr << " " << m_strName << std::endl;
    }

private:
    Leaf();  // 不允许
};
}
#endif // _LEAF_HPP_
//copy from https://blog.csdn.net/liang19890820/article/details/71240662 