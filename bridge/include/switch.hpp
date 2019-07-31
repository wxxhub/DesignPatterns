#ifndef _SWITCH_HPP_
#define _SWITCH_HPP_

#include "electric_appliance.hpp"

namespace my_study
{
class Switch
{
public:
    Switch(ElectricAppliance *e_a){e_a_ = e_a;}
    virtual ~Switch(){};

    virtual void On() = 0;
    virtual void Off() = 0;

protected:
    ElectricAppliance *e_a_;
};

class TwoPositionSwitch : public Switch
{
public:
    TwoPositionSwitch(ElectricAppliance *e_a) : Switch(e_a){}
    ~TwoPositionSwitch(){}
    void On()
    {
        std::cout << "TwoPositionSwitch On" << std::endl;
        e_a_->powerOn();
    }

    void Off()
    {
        std::cout << "TwoPositionSwitch Off" << std::endl;
        e_a_->powerOff();
    }
};
}

#endif /* _SWITCH_HPP_ */