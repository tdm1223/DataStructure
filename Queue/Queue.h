#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        this->data = 0;
        next = nullptr;
    }
    ~Node() = default;
};

class Queue
{
public:
    Queue();
    ~Queue() = default;
    void enqueue(int value);
    int dequeue();
    bool empty();
    int size();
    int peek();

private:
    int size_;
    Node* rear_;
    Node* front_;
};

#endif
