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
template<typename T> class SLL_Node
{
    public:
        SLL_Node(){
            next_node = nullptr;  //create the first node in the link, assign NULL to the node
        }
        SLL_Node(T user_data_input, SLL_Node* node_nuller = nullptr)
        {
            user_data = user_data_input;       //set info to a value given by the constructor by user or data
            next_node = node_nuller;   //set value of the next node to NULL when creating the next node using this constructor
        }
        T user_data;             //info holds the values given to the node by a user or data
        SLL_Node* next_node;    //next holds the value of NULL or the next node in the link
};
#endif// LINKED_LIST
