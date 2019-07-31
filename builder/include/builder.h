#ifndef _BUILDER_TEST_H_
#define _BUILDER_TEST_H_

#include <iostream>

namespace my_study
{

class Builder
{
public:
    virtual void selectCpu() = 0;
    virtual void selectDisk() = 0;
    virtual void selectMem() = 0;
};

class DesktopBuilder : public Builder
{
public:
    virtual void selectCpu(){ std:: cout << "select desktop cpu" << std::endl;}
    virtual void selectDisk(){ std:: cout << "select desktop disk" << std::endl;}
    virtual void selectMem(){ std:: cout << "select desktop memory" << std::endl;}
};

class LaptopBuilder : public Builder
{
public:
    virtual void selectCpu(){ std:: cout << "select laptop cpu" << std::endl;}
    virtual void selectDisk(){ std:: cout << "select laptop disk" << std::endl;}
    virtual void selectMem(){ std:: cout << "select laptop memory" << std::endl;}
};

class Director
{
public:
    Director(Builder *builder)
    {
        builder_ = builder;
    }

    void create()
    {
        builder_->selectCpu();
        builder_->selectDisk();
        builder_->selectMem();
    }
private:
    Builder *builder_;
};

}

#endif /* _BUILDER_TEST_H_ */