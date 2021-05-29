#include<memory>
#include<iostream>

class Node
{
private:
    int data_;
    std::unique_ptr<Node> next_;
public:
    friend class Stack;
    Node() : next_(nullptr), data_(NULL) { }
};

class Stack
{
private:
    int size_;
    std::unique_ptr<Node> top_;

public:
    Stack();
    ~Stack() = default;
    void push(int value);
    void pop();
    int top();
    bool empty();
    int size();
};