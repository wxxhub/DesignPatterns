#ifndef _PROTOTYPE_TEST_H_
#define _PROTOTYPE_TEST_H_

namespace my_study
{

class Prototype
{
public:
    virtual ~Prototype();
    virtual Prototype *clone() const = 0;

    void setValue(int value);
    void setCopyValue(int value);
    int getValue();
    int getCopyValue();

protected:
    Prototype();

    int copy_value_ = 0;
    int value_ = 0;
};

class ConcretePrototype : public Prototype
{
public:
    ConcretePrototype();
    ~ConcretePrototype();    

    Prototype *clone() const;

private:
    ConcretePrototype(const ConcretePrototype &cp);
};

}

#endif /* _PROTOTYPE_TEST_H_ */