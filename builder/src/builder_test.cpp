#include <iostream>

#include "builder.h"

using namespace std;
using namespace my_study;

int main()
{
    LaptopBuilder laptop;
    Director dir(&laptop);

    dir.create();
    return 0;
}