#ifndef _ADAPTER_HPP_
#define _ADAPTER_HPP_

#include "adaptee.hpp"
#include "target.hpp"

namespace my_study
{
class PowerAdapter : public ChineseSocket
{
public:
    PowerAdapter() : apple_charge_(new AppleCharge()){}
    ~PowerAdapter(){delete apple_charge_;}

    void charge()
    {
        apple_charge_->ChargeWithFeetFlat();
    }

private:
    AppleCharge *apple_charge_;
};
}

#endif /* _ADAPTER_HPP_ */