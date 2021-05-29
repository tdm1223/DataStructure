#include "Stack.h"

int Stack::size()
{
    return size_;
}

Stack::Stack() : size_(0), top_(nullptr)
{
    
}

void Stack::push(int value)
{
    std::unique_ptr<Node> newNode(new Node());
    newNode->data_ = value;
    size_++;
    if (empty())
    {
        top_ = std::move(newNode);
    }
    else
    {
        newNode->next_ = std::move(top_);
        top_ = std::move(newNode);
    }
}

void Stack::pop()
{
    if (empty())
    {
        std::cout << "no data" << std::endl;
        return;
    }

    size_--;
    top_ = std::move(top_->next_);
}

int Stack::top()
{
    return top_->data_;
}

bool Stack::empty()
{
    if (size_ == 0)
    {
        return true;
    }
    return false;
}
