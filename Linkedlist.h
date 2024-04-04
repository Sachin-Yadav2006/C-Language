#include <stdio.h>
#include "Linkedlist.c"
// typedef struct node
// {
//     int data;
//     struct node *next;
// } node;


int sizeOfLinkedList(node *head);
node *insertionatindex(node *head, int index, int value);
node *insertionatend(node *head, int value);    //Time complexity can be reduced to order 1 when we create a pointer to store tail also
node *insertionatbeginning(node *head, int value);
node *insertionafternode(node *head, int target, int value);
node *deleteSpecificElement(node *head, int value); // Deleting the element 'value' from the linked list
node *deleteFromBeginning(node *head);
node *deleteFromEnd(node *head);  //Time complexity can be reduced to order 1 when we create a pointer to store tail also
node *deleteAtIndex(node *head, int value);
node *deleteAll(node *head);
int search(node *head, int value);
node *bubbleSort(node *head);
node *selectionsort(node *head);
// node *InsertionSort(node *head);  //Insertion sort is not much useful in linked list as we cannot go reverse and if we go forward and then do the change then it will take a lot of time.
void MergeSort(node *head, int startindex, int endindex);
void Merging(node *head, int startindex, int mid, int endindex);
void traversal(node *head);
