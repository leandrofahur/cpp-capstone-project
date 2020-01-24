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
    ~LinkedList() 
    {
        while(this->head)
        {
            this->head = std::move(this->head->next);
        } 
        numOfNodes = 0; 
    }

    // Insert node:
    // Thanks to: https://solarianprogrammer.com/2019/02/22/cpp-17-implementing-singly-linked-list-smart-pointers/
    void InsertNode(const T &data)
    {
        auto node = std::make_unique<Node<T>>(data);
        if (this->head)
        {
            node->next = std::move(this->head);
            this->head = std::move(node);
            this->numOfNodes++;

            // std::cout << this->head->data << std::endl;
            // std::cout << this->numOfNodes << std::endl;
        }
        else
        {
            this->head = std::move(node);
            this->numOfNodes++;

            // std::cout << this->head->data << std::endl;
            // std::cout << this->numOfNodes << std::endl;
        }
    }

    // This function removes the last node from the list.
    // Obs.: The node head is the beginning of the list
    T RemoveNode()
    {
        T data = this->GetHeadData();
        std::unique_ptr<Node<T>> tmp = std::move(this->head);
        this->head = std::move(tmp->next);
        return data;       
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

    T GetHeadData()
    {
        return this->head->data;
    }
};

#endif // LINKED_LIST_H