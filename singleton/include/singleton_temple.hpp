#ifndef _SINGLETON_TEMPLE_HPP_
#define _SINGLETON_TEMPLE_HPP_

template <class T>
class SingletionTemple
{
public:
    static T* getInstance()
    {
        if (unique_instance_ == nullptr)
        {
            unique_instance_ = new T;
        }
    }

    static void destoryInstance()
    {
        if (unique_instance_)
        {
            delete unique_instance_;
            unique_instance_ = nullptr;
        }
    }

protected:
    SingletionTemple(){};
    ~SingletionTemple(){};

private:
    static T* unique_instance_;

};

template <class T> T* SingletionTemple<T>::unique_instance_ = nullptr;
#endif /* _SINGLETON_TEMPLE_HPP_ */