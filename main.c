#include "list.c"

int main(){
    struct s_node* p_list = NULL;

    for (int i = 0; i < 10; i++){
        p_list = Push(p_list, i);
    }

    printf("List:\n");
    PrintList(p_list);
    p_list = Pop(p_list);
    p_list = Pop(p_list);
    p_list = Pop(p_list);
    printf("\nList after popping:\n");
    PrintList(p_list);

    Enqueue(p_list, 27);
    Enqueue(p_list, 81);
    printf("\nEnqueue:\n");
    PrintList(p_list);

    // int search;
    // printf("What value would you like to search for?\n>");
    // scanf("%i", &search);
    
    // struct s_node* found = LinearSearch(p_list, search);
    // printf("Your memory was stored at: %p\n", found);

    DeallocList(p_list);
    return 0;
}