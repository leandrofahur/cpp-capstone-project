#ifndef NODE_H
#define NODE_H

#include <memory>

template<class T>
struct Node
{
    T data{};
    std::unique_ptr<Node<T>> next{};

    Node() : next(nullptr) {}
    Node(T data) : data(data), next(nullptr) {}
    ~Node() {}
};

#endif // NODE_H