#ifndef _ABSTRACT_FACTORY_PRODUCT_TEST_H_
#define _ABSTRACT_FACTORY_PRODUCT_TEST_H_

namespace my_study
{
class abstractProductA
{
public:
    virtual ~abstractProductA();
protected: 
    abstractProductA();
    

private:

};

class abstractProductB
{
public:
    virtual ~abstractProductB();
protected:
    abstractProductB();


private:

};

class productA :public abstractProductA
{
public:
    productA();
    ~productA();
};

class productA2 :public abstractProductA
{
public:
    productA2();
    ~productA2();
};

class productB :public abstractProductB
{
public:
    productB();
    ~productB();
};

class productB2  :public abstractProductB
{
public:
    productB2();
    ~productB2();
};
}

#endif /* _ABSTRACT_FACTORY_PRODUCT_TEST_H_ */