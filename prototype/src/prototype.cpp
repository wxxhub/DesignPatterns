#include <iostream>

#include "prototype.h"

using namespace my_study;

Prototype::Prototype()
{

}

Prototype::~Prototype()
{

}

void Prototype::setValue(int value)
{
    value_ = value;
}

int Prototype::getValue()
{
    return value_;
}

void Prototype::setCopyValue(int value)
{
    copy_value_ = value;
}

int Prototype::getCopyValue()
{
    return copy_value_;
}

ConcretePrototype::ConcretePrototype()
{

}


ConcretePrototype::~ConcretePrototype()
{

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp)
{
    std::cout << "concretePrototype copy" << std::endl;
    copy_value_ = cp.copy_value_;
}

Prototype *ConcretePrototype::clone() const
{
    return new ConcretePrototype(*this);
}