#ifndef _SINGLETON_CHILD_HPP_
#define _SINGLETON_CHILD_HPP_

#include "singleton_temple.hpp"

class SingletonChild : public SingletionTemple<SingletonChild>
{
public:
    SingletonChild(){};
    ~SingletonChild(){};

    void setValue(int value)
    {
        value_ = value;
    }

    int getValue()
    {
        return value_;
    }

private:
    int value_;
};

#endif /* _SINGLETON_CHILD_HPP_ */