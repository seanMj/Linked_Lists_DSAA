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
    SLL_Node<double>* ptr_node = new SLL_Node<double>(80);
    std::cout << ptr_node->user_data << std::endl;

    ptr_node->next_node = new SLL_Node<double>(30.55);
    std::cout << ptr_node->next_node->user_data << std::endl;

    ptr_node->next_node->next_node = new SLL_Node<double>(555);
    std::cout << (ptr_node->next_node->next_node->user_data) * 5 << '\n';
}

