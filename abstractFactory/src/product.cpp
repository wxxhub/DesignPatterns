#include <iostream>
#include "product.h"

using namespace std;
using namespace my_study;

abstractProductA::~abstractProductA()
{
}

abstractProductA::abstractProductA()
{
}

abstractProductB::~abstractProductB()
{
}

abstractProductB::abstractProductB()
{
}

productA::productA()
{
    cout << "ProductA..." << endl;
}

productA::~productA()
{
}

productA2::productA2()
{
    cout << "ProductA2..." << endl;
}

productA2::~productA2()
{
}

productB::productB()
{
    cout << "ProductB..." << endl;

}

productB::~productB()
{
}

productB2::productB2()
{
    cout << "ProductB2..." << endl;
}

productB2::~productB2()
{
    
}