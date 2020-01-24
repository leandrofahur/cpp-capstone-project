// C++ core libs:
#include <iostream>
// My own libs:
#include "LinkedList.h"

// -------------------------------------------------------------------------------

// -------------------------------------------------------------------------------

LinkedList<int> l{};

int main()
{
    bool controlLoop = true;
    int number = -1;
    do
    {
        std::cout << "************************************************************************" << std::endl;
        std::cout << "* USER MENU: " << std::endl;
        std::cout << "*   0. Quit the menu." << std::endl;
        std::cout << "*   1. Insert your own data on the list." << std::endl;
        std::cout << "*   2. Print list." << std::endl;
        std::cout << "*   3. Write list data as a file." << std::endl;
        std::cout << "************************************************************************" << std::endl;

        std::cout << "Insert a number: " << std::endl;
        std::cin >> number;

        switch (number)
        {
        case 0:
        {
            controlLoop = false;
        }
        break;

        case 1:
        {
            bool ctrlInsert = true;
            int number = -1;
            do
            {
                std::cout << "Insert an integer number or -1000 to stop inserting and print the list in the console: " << std::endl;
                std::cin >> number;

                if (number == -1000)
                {
                    ctrlInsert = false;
                }
                else
                {
                    l.InsertNode(number);
                }
            } while (ctrlInsert);
        }
        break;

        case 2:
        {
            // remember it behaves like a stack!
            std::cout << "\n";
            std::cout << "Printing list..." << std::endl;
            l.PrintLinkedList();
            std::cout << "\n";
        }
        break;

        case 3:
        {
            std::ofstream out("output.txt");
            out << l;
        }
        break;

        default:
        {
            std::cout << "Insert a valid number from the menu! Or insert 0 to quit" << std::endl;
        }
        break;
        }

    } while (controlLoop);
}
