#ifndef _MEMENTO_TEST_H_
#define _MEMENTO_TEST_H_

#include <iostream>

namespace my_study
{
// 记录时间
class Data
{
public:
    Data(std::string d_t)
        : data_(d_t)
    {

    }

    void setDate(std::string d_t)
    {
        data_ = d_t;
    }

    std::string getDate()
    {
        return data_;
    }

private:
    std::string data_;
};

// 编辑的文本
class Text
{
public:
    void addData(std::string data)
    {
        data_ += data;
    }

    void setData(std::string data)
    {
        data_ = data;
    }
    
    std::string getData()
    {
        return data_;
    }

    void setMemento(Data *d_t)
    {
        data_ = d_t->getDate();
    }

    Data *createMemento()
    {
        return new Data(data_);
    }
private:
    std::string data_;
};
}

#endif /* _MEMENTO_TEST_H_ */