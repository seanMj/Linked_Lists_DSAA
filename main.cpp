/* Failure is what makes the code look better. */
/* 
 * FILE('s): main.cpp
 * DATE&TIME:   thursdaz apr. 20th
 * CREATED_BY:  Data Structures And Algorithms in C++ 4th ed.
 * CREATED_FOR: Study's of DSAA's for my next step towards my dreams
 * WHAT_IT_DOES: creates a linked list using a class defined in Linked_List.h
 */
#include <iostream>
#include <cstdlib>
#include "Linked_List.h"
using std::cout;	using std::endl;
#define NDEBUG
//..
int main()
{
    int_LNode<double>* ptr_node = new int_LNode<double>(80);
    std::cout << ptr_node->info << std::endl;

    ptr_node->next = new int_LNode<double>(30.55);
    std::cout << ptr_node->next->info << std::endl;

    ptr_node->next->next = new int_LNode<double>(555);
    std::cout << (ptr_node->next->next->info) * 5 << '\n';
}

