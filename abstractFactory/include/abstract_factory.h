#ifndef _ABSTRACT_FACTORY_TEST_H_
#define _ABSTRACT_FACTORY_TEST_H_

#include "product.h"

namespace my_study
{
class abstractFactory
{
public:
    abstractFactory();
    virtual ~abstractFactory();
    virtual abstractProductA* CreateProductA() = 0;
    virtual abstractProductB* CreateProductB() = 0;
};

class concreteFactory1 :public abstractFactory
{
public:
    concreteFactory1();
    ~concreteFactory1();
    abstractProductA* CreateProductA();
    abstractProductB* CreateProductB();
    
};

class concreteFactory2 :public abstractFactory
{
public:
    concreteFactory2();
    ~concreteFactory2();
    abstractProductA* CreateProductA();
    abstractProductB* CreateProductB();
};
}

#endif /* _ABSTRACT_FACTORY_TEST_H_ */