#include <iostream>

#include "singleton_child.hpp"

using namespace std;

int main()
{
    SingletonChild *t1 = SingletonChild::getInstance();
    SingletonChild *t2 = SingletonChild::getInstance();

    // 不要自己实例化!!!
    SingletonChild *t3 = new SingletonChild();

    cout << "t1 value: " << t1->getValue() << endl;
    cout << "t2 value: " << t2->getValue() << endl;
    cout << "t3 value: " << t3->getValue() << endl;
    cout << "change value by t2..." << endl;

    t2->setValue(666);
    cout << "t1 value: " << t1->getValue() << endl;
    cout << "t2 value: " << t2->getValue() << endl;
    cout << "t3 value: " << t3->getValue() << endl;
}