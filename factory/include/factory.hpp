#ifndef _FACTORY_TEST_H_
#define _FACTORY_TEST_H_

#include "product.hpp"

namespace my_study
{
class Factory
{
public:
    Factory(){}    
    ~Factory(){};

    virtual Product* createProduct() = 0;
};

class ConcreteFactory : public Factory
{
public:
    ConcreteFactory(){ std::cout << "concrete factory" << std::endl;}
    ~ConcreteFactory(){}

    Product* createProduct(){return new ConcreteProduct();}

private:

};
}

#endif /* _FACTORY_TEST_H_ */
