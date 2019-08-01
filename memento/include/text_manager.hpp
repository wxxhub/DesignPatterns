#ifndef _TEXT_MANAGER_HPP_
#define _TEXT_MANAGER_HPP_

#include <vector>

#include "memento.hpp"

namespace my_study
{
class TextManager
{
public:
    TextManager(Text *text)
        : text_(text),
          null_data_(new Data(""))
    {}

    ~TextManager()
    {
        for (int i = 0; i < text_history_.size(); ++i)
        {
            delete text_history_.at(i);
        }

        text_history_.clear();

        delete null_data_;
    }

    void save()
    {
        std::cout << "save ..." << std::endl;
        text_history_.push_back(text_->createMemento());
    }

    void undo()
    {
        std::cout << "undo ..." << std::endl;
        if (text_history_.empty())
        {
            text_->setMemento(null_data_);
            return;
        }
        
        text_->setMemento(text_history_.back());
        text_history_.pop_back();
    }

private:
    Text *text_;
    std::vector<Data*> text_history_;

    Data *null_data_;
};
}

#endif /* _TEXT_MANAGER_HPP_ */