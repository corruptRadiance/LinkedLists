#include <stdio.h>
#include <stdlib.h>

struct s_node{
    int data;
    struct s_node* next;
};

/*
Push a node onto the stack
Returns the new node as head of the list
*/
struct s_node* PushNode(struct s_node* head, int value){
    // Create new node
    struct s_node* node = (struct s_node*) malloc(sizeof(struct s_node));
    node->data = value;
    node->next = NULL;

    // If list is empty, create one
    if (head == NULL){
        return node;
    }

    // Node points to element pointed to by head
    node->next = head;

    return node;
}

