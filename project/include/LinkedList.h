#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

template <class T>
class LinkedList : public Node<T>
{
private:
    std::unique_ptr<Node<T>> head{};
    std::size_t numOfNodes{};

public:
    LinkedList() : numOfNodes(0), head(nullptr) {}
    ~LinkedList() { numOfNodes = 0; }

    // Insert node:
    // void InsertNode(const T &data)
    // {
    //     auto node = std::make_unique<Node<T>>(data);
    //     if (this->head == nullptr)
    //     {
    //         node->next = std::move(this->head);
    //         this->head = std::move(node);
    //         this->numOfNodes++;

    //         //    std::cout << this->head->data << std::endl;
    //         //    std::cout << this->numOfNodes << std::endl;
    //     }
    //     else
    //     {
    //         this->head = std::move(node);
    //         this->numOfNodes++;

    //         //    std::cout << this->head->data << std::endl;
    //         //    std::cout << this->numOfNodes << std::endl;
    //     }
    // }

    // Insert node:
    void InsertNode(T data)
    {
        auto node = std::make_unique<Node<T>>(data);
        if(this->head)
        {
            node->next = std::move(this->head);
            this->head = std::move(node);
        }
        else
        {
            this->head = std::move(node);
        }
        
    }

    void PrintLinkedList() const
    {
        Node<T> *tmp = this->head.get();
        while (tmp != nullptr)
        {
            std::cout << tmp->data << " ";
            tmp = tmp->next.get();
        }
    }

    T GetHead()
    {
        return this->head->data;
    }
};

#endif // LINKED_LIST_H