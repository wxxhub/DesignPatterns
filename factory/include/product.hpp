#ifndef _FACTORY_PRODUCT_TEST_H_
#define _FACTORY_PRODUCT_TEST_H_

#include <iostream>

namespace my_study
{
class Product
{
public:
    Product(){}
    virtual~Product(){}
};

class ConcreteProduct : public Product
{
public:
    ConcreteProduct(){ std::cout << "concrete product" << std::endl;}
    ~ConcreteProduct(){}

private:

}; 
}

#endif /* _FACTORY_PRODUCT_TEST_H_ */
