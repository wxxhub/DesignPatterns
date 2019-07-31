#include <iostream>

#include "prototype.h"

using namespace std;
using namespace my_study;

int main()
{
    Prototype *p = new ConcretePrototype();

    cout << "p value: " << p->getValue() << endl;
    cout << "p copy_value: " << p->getCopyValue() << endl;

    cout << "change value and clone p to p1..." << endl;

    p->setValue(666);
    p->setCopyValue(666);

    Prototype *p1 = p->clone();
    cout << "p value: " << p->getValue() << endl;
    cout << "p copy_value: " << p->getCopyValue() << endl;
    cout << "p1 value: " << p1->getValue() << endl;
    cout << "p1 copy_value: " << p1->getCopyValue() << endl;
    return 0;
}