#include "list.c"

int main(){
    struct s_node* p_head = NULL;

    for (int i = 0; i < 10; i++){
        p_head = PushNode(p_head, i);
    }

    PrintList(p_head);

    int search;
    printf("What value would you like to search for?\n>");
    scanf("%i", &search);
    
    struct s_node* found = LinearSearch(p_head, search);
    printf("Your memory was stored at: %p\n", found);

    DeallocList(p_head);
    return 0;
}