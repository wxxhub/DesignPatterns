#ifndef _SINGLETON_HPP_
#define _SINGLETON_HPP_

class Singleton
{
public:
    static Singleton *getInstance()
    {
        if (singleton_instance_ == nullptr)
        {
            singleton_instance_ = new Singleton();
        }

        return singleton_instance_;
    }

    void setValue(int value)
    {
        value_ = value;
    }

    int getValue()
    {
        return value_;
    }

private:
    Singleton(){};
    ~Singleton(){};

    static Singleton *singleton_instance_;
    int value_ = 0;
};

Singleton *Singleton::singleton_instance_ = nullptr;

#endif /* _SINGLETON_HPP_ */