#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <vector>
#include "component.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

namespace my_study
{
class Composite : public Component
{
public:
    Composite (std::string name) : Component(name) {}
    virtual ~Composite() 
    {
        while (!m_elements.empty()) 
        {
            std::vector<Component*>::iterator it = m_elements.begin();
            SAFE_DELETE(*it);
            m_elements.erase(it);
        }
    }

    void Add(Component *cmpt) 
    {
        m_elements.push_back(cmpt);
    }

    void Remove(Component *cmpt) 
    {
        std::vector<Component*>::iterator it = m_elements.begin();
        while (it != m_elements.end())  
        {
            if (*it == cmpt) 
            {
                SAFE_DELETE(cmpt);
                m_elements.erase(it);
                break;
            }
            ++it;
        }
    }

    Component* GetChild(int index) 
    {
        if (index >= m_elements.size())
            return NULL;

        return m_elements[index];
    }

    // 递归显示
    void Operation(int indent) 
    {
        std::string newStr(indent, '-');
        std::cout << newStr << "+ " << m_strName << std::endl;
        
        // 显示每个节点的孩子
        std::vector<Component*>::iterator it = m_elements.begin();
        while (it != m_elements.end()) 
        {
            (*it)->Operation(indent + 2);
            ++it;
        }
    }

private:
    Composite();  // 不允许

private:
    std::vector<Component *> m_elements;
};
}
#endif /* COMPOSITE_H */
// copy from https://blog.csdn.net/liang19890820/article/details/71240662 