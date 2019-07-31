#ifndef _IMPLEMENTOR_HPP_
#define _IMPLEMENTOR_HPP_

#include <iostream>

namespace my_study
{

class ElectricAppliance
{
public:
    ElectricAppliance(){}
    virtual ~ElectricAppliance(){};

    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
};

class Light : public ElectricAppliance
{
public:
    Light(){}
    ~Light(){}

    void powerOn(){ std::cout << "Light Power On" << std::endl;}
    void powerOff(){ std::cout << "Light Power Off" << std::endl;}
};

class Fun : public ElectricAppliance
{
public:
    Fun(){}
    ~Fun(){}

    void powerOn(){ std::cout << "Fun Power On" << std::endl;}
    void powerOff(){ std::cout << "Fun Power Off" << std::endl;}
};

}

#endif /* _IMPLEMENTOR_HPP_ */