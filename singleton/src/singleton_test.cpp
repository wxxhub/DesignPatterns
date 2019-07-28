#include <iostream>

#include "singleton.hpp"

using namespace std;

int main()
{
    Singleton *t1 = Singleton::getInstance();
    Singleton *t2 = Singleton::getInstance();

    cout << "t1 value: " << t1->getValue() << endl;
    cout << "t2 value: " << t2->getValue() << endl;
    cout << "change value by t2..." << endl;

    t2->setValue(666);
    cout << "t1 value: " << t1->getValue() << endl;
    cout << "t2 value: " << t2->getValue() << endl;
}