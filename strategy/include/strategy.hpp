#ifndef _STRATEGY_TEST_HPP_
#define _STRATEGY_TEST_HPP_

#include <iostream>

namespace my_study
{
class Strategy
{
public:
    Strategy(){}
    virtual ~Strategy(){}

    virtual void travel() = 0;
};

class BikeTravel : public Strategy
{
public:
    BikeTravel(){}
    ~BikeTravel(){}

    void travel()
    {
        std::cout << "travel by bike..." << std::endl;
    }
};

class CarTravel : public Strategy
{
public:
    CarTravel(){}
    ~CarTravel(){}

    void travel()
    {
        std::cout << "travel by car..." << std::endl;
    }
};

class TrainTravel : public Strategy
{
public:
    TrainTravel(){}
    ~TrainTravel(){}

    void travel()
    {
        std::cout << "travel by train..." << std::endl;
    }
};
}

#endif /* _STRATEGY_TEST_HPP_ */