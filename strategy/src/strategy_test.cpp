#include <iostream>

#include "strategy.hpp"
#include "traveler.hpp"

using namespace std;
using namespace my_study;

int main()
{
    Strategy *bike_travel  = new BikeTravel();
    Strategy *car_travel   = new CarTravel();
    Strategy *train_travel = new TrainTravel();

    Traveler *bike_traveler  = new Traveler(bike_travel);
    Traveler *car_traveler   = new Traveler(car_travel);
    Traveler *train_traveler = new Traveler(train_travel);

    bike_traveler->travel(); 
    car_traveler->travel();  
    train_traveler->travel();

    return 0;
}