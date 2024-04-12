#include <stdio.h>
#include "Linkedlist.h"
int middleOfLinkedList(node* head);



int main(){
    node* head=NULL;
    head=insertionatend(head,10);
    head=insertionatend(head,20);
    head=insertionatend(head,45);
    head=insertionatend(head,78);
    head=insertionatend(head,89);
    int middle=middleOfLinkedList(head);
    printf("The middle element of the linked list is %d",middle);
    return 0;
}


int middleOfLinkedList(node * head){
    if(head==NULL){
        printf("No element in the linked list!!!\n");
        return -1;
    }
    int size=sizeOfLinkedList(head);
    int index=size/2;
    int i;
    for(i=0;i<index;i++)
    {
        head=head->next;
    }
    return head->data;
}