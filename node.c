#include <stdio.h>
#include <stdlib.h>

struct s_node{
    int data;
    struct s_node* next;
};

/*
Push a node onto the list
Returns the new node as head of the list
*/
struct s_node* Push(struct s_node* head, int value){
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

/*
Pop a node from the list
Returns the list's new head
*/
struct s_node* Pop(struct s_node* head){
    if (head == NULL){return NULL;}

    struct s_node* p_newHead = head->next;
    free(head);

    return p_newHead;
}

/*
Find the tail of a list
*/
struct s_node* FindTail(struct s_node* head){
    struct s_node* p_tail = head;

    while (p_tail->next != NULL){
        p_tail = p_tail->next;
    }

    return p_tail;
}

/*
Place a node at the tail of the list
Returns the new node only when list is empty
*/
struct s_node* Enqueue(struct s_node* head, int value){
    // Craete new node
    struct s_node* node = (struct s_node*) malloc(sizeof(struct s_node));
    node->data = value;
    node->next = NULL;

    // If list is empty, create one
    if (head == NULL){
        return node;
    }

    // Add new node to tail
    FindTail(head)->next = node;
}
