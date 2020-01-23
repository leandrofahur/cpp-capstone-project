// C++ core libs:
#include <iostream>
#include <vector>
// #include <memory>

// My own libs:
#include "LinkedList.h"

// -------------------------------------------------------------------------------



// -------------------------------------------------------------------------------

int main()
{
    LinkedList<int> l{};    
    l.InsertNode(10);
    l.InsertNode(0);
    l.InsertNode(100);
    l.PrintLinkedList();

    
}