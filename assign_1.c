#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    node* next;

} node;

void join(node* m, node* n){
    node* p = n;
    while(p->next != NULL){
        p = p -> next;
    }
    p->next = m ;
}

int main(){

    struct node* head = (struct node*) malloc(sizeof(struct node));;
    struct node* second = (struct node*) malloc(sizeof(struct node));;
     struct node* head2 = (struct node*) malloc(sizeof(struct node));;
    struct node* second2 = (struct node*) malloc(sizeof(struct node));;
    

    head -> data = 1;
    head->next = second;
    second->data = 2;
    second->next = NULL;

    head2 -> data = 4;
    head2->next = second2;
    second2->data = 5;
    second2->next = NULL;

    join(head,head2);
    while(head2 != NULL  ){
        printf(" %d", head2 -> data);
        head2 = head2 -> next;
    }

    // from this we can say that node m is appended at the end of node m 

    // 4-> 5 -> 1 -> 2 


    return 0 ;

}