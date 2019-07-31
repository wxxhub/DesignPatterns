#include <iostream>

#include "factory.hpp"

using namespace std;
using namespace my_study;

int main()
{
    Factory *fact = new ConcreteFactory();

    Product *p = fact->createProduct();
    return 0;
}