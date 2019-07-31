#ifndef _TRAVELER_HPP_
#define _TRAVELER_HPP_

#include "strategy.hpp"

namespace my_study
{
class Traveler
{
public:
    Traveler(Strategy *travel_strategy){travel_strategy_ = travel_strategy;}
    ~Traveler();

    void travel()
    {
        travel_strategy_->travel();
    }
private:
    Strategy *travel_strategy_;
};
}

#endif /* _TRAVELER_HPP_ */