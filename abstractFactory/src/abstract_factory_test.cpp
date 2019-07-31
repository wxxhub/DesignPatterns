#include <iostream>

#include "abstract_factory.h"

using namespace std;
using namespace my_study;

int main()
{
    abstractFactory *af1 = new concreteFactory1();

    af1->CreateProductA();
    af1->CreateProductB();

    abstractFactory *af2 = new concreteFactory2();

    af2->CreateProductA();
    af2->CreateProductB();
    return 0;
}