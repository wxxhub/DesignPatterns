#include <iostream>

#include "adapter.hpp"

using namespace std;
using namespace my_study;

int main()
{
    ChineseSocket *adapter = new PowerAdapter();
    adapter->charge();
    return 0;
}