/* Failure is what makes the code look better. */
/* 
 * FILE('s): Linked_List.h
 * DATE&TIME: thursday apr. 20th 2023
 * CREATED_BY:  Data Structures And Algorithms in C++ 4th ed. (changed into a template - more logical imo)
 * CREATED_FOR: Studies
 * WHAT_IT_DOES: creates a singly linked list of type T
*/

#define LINKED_LIST
#ifdef LINKED_LIST
template<typename T> class int_LNode
{
    public:
        int_LNode(){
            next = nullptr;  //create the first node in the link, assign NULL to the node
        }
        int_LNode(T i, int_LNode* inull = nullptr){
            info = i;       //set info to a value given by the constructor by user or data
            next = inull;   //set value of the next node to NULL when creating the next node using this constructor
        }
        T info;             //info holds the values given to the node by a user or data
        int_LNode* next;    //next holds the value of NULL or the next node in the link
};
#endif// LINKED_LIST
