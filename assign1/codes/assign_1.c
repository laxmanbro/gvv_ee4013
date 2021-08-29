#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;

} node;

void join(node* m, node* n){
    node* p = n;
    while(p->next != NULL){
        p = p -> next;
    }
    p->next = m ;
}

int main(){

    struct node* head = (struct node*) malloc(sizeof(struct node));
    struct node* second = (struct node*) malloc(sizeof(struct node));
    struct node* head2 = (struct node*) malloc(sizeof(struct node));
    struct node* second2 = (struct node*) malloc(sizeof(struct node));
    

    head -> data = 12;
    head->next = second;
    second->data = 99;
    second->next = NULL;

    head2 -> data = 1;
    head2->next = second2;
    second2->data = 2;
    second2->next = NULL;
 

    struct node* m = head;
    struct node* n = head2;
    

    join(m,n);
    while(n != NULL  ){
        printf(" %d", n -> data);
        n = n -> next;
    }



    return 0 ;

}