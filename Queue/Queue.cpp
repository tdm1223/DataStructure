#include "Queue.h"

Queue::Queue()
{
    size_ = 0;
    rear_ = front_ = nullptr;
}

void Queue::enqueue(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (empty())
    {
        rear_ = front_ = newNode;
    }
    else
    {
        rear_->next = newNode;
        rear_ = newNode;
    }
    size_++;
}

int Queue::dequeue()
{
    if (empty())
    {
        std::cout << "No data" << std::endl;
        exit(1);
    }

    int tmp = front_->data;
    Node* node = front_;
    front_ = front_->next;
    size_--;

    delete node;
    return tmp;
}

bool Queue::empty()
{
    if (size_ == 0)
    {
        return true;
    }
    return false;
}

int Queue::size()
{
    return size_;
}

int Queue::peek()
{
    return front_->data;
}

