#include <iostream>

#include "electric_appliance.hpp"
#include "switch.hpp"

using namespace std;
using namespace my_study;

int main()
{
    ElectricAppliance *light = new Light();
    ElectricAppliance *fun = new Fun();

    Switch *switch1 = new TwoPositionSwitch(light);
    Switch *switch2 = new TwoPositionSwitch(fun);

    switch1->On();
    switch1->Off();

    switch2->On();
    switch2->Off();
    return 0;
}