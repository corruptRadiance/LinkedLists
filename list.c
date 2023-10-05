#include "node.c"

/*
Prints the contents of a list
*/
void PrintList(struct s_node* head){
    struct s_node* p_node = head;

    while (p_node != NULL){
        printf("| %i | %p |\n", p_node->data, p_node);
        p_node = p_node->next;
    }
}

/*
Search the list for a given value
Returns the location of the data if found
Returns NULL if data not found
*/
struct s_node* LinearSearch(struct s_node* head, int search){
    struct s_node* p_node = head;
    
    do{
        if (p_node->data != search){
            p_node = p_node->next;
            continue;
        }

        return p_node;
    }while (p_node != NULL);

    printf("Data not found.\n");
    return NULL;
}

/*
Call free() on every node of a given list
*/
void DeallocList(struct s_node* head){
    struct s_node* p_node = head;    

    do{
        free(p_node);
        p_node = p_node->next;
    }while (p_node != NULL);
}