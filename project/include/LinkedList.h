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
    void InsertNode(const T &data)
    {
        auto node = std::make_unique<Node<T>>(data);
        if (this->head == nullptr)
        {
            node->next = std::move(this->head);
            this->head = std::move(node);
            this->numOfNodes++;

            //    std::cout << this->head->data << std::endl;
            //    std::cout << this->numOfNodes << std::endl;
        }
        else
        {
            this->head = std::move(node);
            this->numOfNodes++;

            //    std::cout << this->head->data << std::endl;
            //    std::cout << this->numOfNodes << std::endl;
        }
    }

    void PrintLinkedList() const
    {
        // auto tmp = this->head.get();
        // while(tmp)
        // {
        //     std::cout << this->head->data << " " << std::endl;
        //     tmp = tmp->next.get();   
        // }
    }
};

#endif // LINKED_LIST_H