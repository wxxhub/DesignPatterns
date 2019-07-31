#include "abstract_factory.h"

using namespace my_study;

abstractFactory::abstractFactory()
{
}

abstractFactory::~abstractFactory()
{
}

concreteFactory1::concreteFactory1()
{
}

concreteFactory1::~concreteFactory1()
{
}

abstractProductA * concreteFactory1::CreateProductA()
{
    return new productA();
}

abstractProductB * concreteFactory1::CreateProductB()
{
    return new productB();
}

concreteFactory2::concreteFactory2()
{
}

concreteFactory2::~concreteFactory2()
{
}

abstractProductA * concreteFactory2::CreateProductA()
{
    return new productA2();
}

abstractProductB * concreteFactory2::CreateProductB()
{
    return new productB2();
}