#include <stdio.h>
#include "Linkedlist.h"
node* reverseALinkedList(node* head);
int main(){
    node* head=NULL;
    head=insertionatend(head,13);
    head=insertionatend(head,12);
    head=insertionatend(head,11);
    head=insertionatend(head,10);
    head=insertionatend(head,9);
    traversal(head);
    head=reverseALinkedList(head);
    traversal(head);
    return 0;
}
node *reverseALinkedList(node *head)
{
    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    node *temp=head->next;
    while(head->next!=NULL)
    {
        temp->next=head;
        head=head->next;
        temp=head->next;
    }
}