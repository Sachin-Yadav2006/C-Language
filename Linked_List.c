#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;


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
int main()
{
    node *head = NULL;
    int i=1;
    while (i==1)
    {
        printf("\n\nEnter your choice out of the following option for various linkedlist operations:\n");
        printf("1. Inserting an element at the end of the linked list\n");
        printf("2. Inserting an element at the beginning of the linked list \n");
        printf("3. Inserting an element after a specific element in the linked list\n");
        printf("4. Inserting an element in the linked list at a particular index\n");
        printf("5. Printing all the elements of the linked list\n");
        printf("6. To get the current size of the linked list\n");
        printf("7. Deleting an specific element from the linked list\n");
        printf("8. Delete the first element of the linked list\n");
        printf("9. Delete the last element of the linked list\n");
        printf("10. Delete the element at an index\n");
        printf("11. Deleting all the elements of the linked list\n");
        printf("12. Searching an element in the linked list\n");
        printf("13. Sorting the elements of the linked list using Bubble Sorting Technique\n");
        printf("14. Sorting the elements of the linked list using the Selecting Sorting Technique\n");
        printf("15. Sorting the elements of the linked lsit using the Merge Sorting Technique\n");
        printf("0. Enter '0' to exit\n");
        int choice;
        printf("\n\nPlease enter your choice now:");
        scanf("%d", &choice);
        int index, value;
        int size;
        int target;
        switch (choice)
        {
        case (1):
            printf("Enter the value to be inserted:");
            scanf("%d", &value);
            head = insertionatend(head, value);
            break;
        case (2):
            printf("Enter the value to be inserted:");
            scanf("%d", &value);
            head = insertionatbeginning(head, value);
            break;
        case (3):
            printf("Enter the value to be inserted:");
            scanf("%d", &value);
            printf("Enter the element of the linked list after which the element is to be inserted:");
            scanf("%d", &target);
            head = insertionafternode(head, target, value);
            break;
        case (4):
            printf("Enter the value to be inserted:");
            scanf("%d", &value);
            printf("Enter the index at which the element is to be inserted:");
            scanf("%d", &index);
            head = insertionatindex(head, index, value);
            break;
        case (5):
            traversal(head);
            break;
        case (6):
            size = sizeOfLinkedList(head);
            printf("The size of the linked list is %d\n", size);
            break;
        case (7):
            printf("Enter the value to be deleted:");
            scanf("%d", &value);
            head = deleteSpecificElement(head, value);
            break;
        case (8):
            head = deleteFromBeginning(head);
            break;
        case (9):
            head = deleteFromEnd(head);
            break;
        case (10):
            printf("Enter the index at which the element is to be deleted\n");
            scanf("%d", &index);
            head = deleteAtIndex(head, index);
            break;
        case (11):
            head = deleteAll(head);
            break;
        case (12):
            printf("Enter the value to be searched in the linked list\n");
            scanf("%d", &value);
            index = search(head, value);
            printf("The element found at the index : %d\n", index);
            break;
        case (13):
            head = bubbleSort(head);
            break;
        case (14):
            head = selectionsort(head);
            break;
        case (15):
            size = sizeOfLinkedList(head);
            MergeSort(head, 0, size - 1);
            break;
        case(0):
            break;
        default:
            printf("Invalid Choice!!\n");
            printf("Please try again!!\n");
        }
        if(choice==0){
            break;
        }
    }
    return 0;
}
node *insertionatend(node *head, int value) //Time complexity can be reduced to order 1 when we create a pointer to store tail also
{
    node *node1 = (node *)malloc(sizeof(node));
    // Creating a variable to store the head of the linked list so that it can be returned else the pointer of the last included element would be returned
    node *temp = head;
    if (node1 == NULL) // checking if the memory is allocated or not
    {
        return head;
    }

    node1->data = value; // Putting the data and next value in the node structure created dynamically
    node1->next = NULL;
    if (temp == NULL) // Checking if the linked list is NULL
    {
        head = node1;
        return head;
    }
    else
    {
        while (temp->next != NULL) // Reaching to the end of the linked list
        {
            temp = temp->next;
        }
        temp->next = node1; // Updating the linked list by inserting the element i.e. node1
    }
    return head;
}
void traversal(node *head)
{
    printf("\nThe elements of the linked lists are \n");
    while (head != NULL)
    {
        printf("%d  ", head->data);
        head = head->next;
    }
    printf("\n");
}
node *insertionatbeginning(node *head, int value)
{
    node *node1 = (node *)malloc(sizeof(node)); // Allocating memory for the node to be created for the new element to be stored
    if (node1 == NULL)                          // Checking if the memory is allocated
    {
        return head;
    }
    else
    {
        node1->data = value; // Putting the date and next values in the node structure created
        node1->next = head;  // Inserting at beginning
        head = node1;        // Updating the head of the linked list
        return head;
    }
}
node *insertionafternode(node *head, int target, int value)
{
    // If the target node after which the element is to be inserted does not exist in the linked list then the element would be inserted at the end of the linked list
    int size = sizeOfLinkedList(head); // To check if the node passed after which the element is to be added does not exist. In that case size and count will help in terminating the loop
    int count = 1;
    node *node1 = (node *)malloc(sizeof(node)); // Dynamically creating a structure of node type
    node *temp = head;                          // creating a duplicate of the head of the linked list to preserve the original head
    if (node1 == NULL)                          // Checking for the memory allocation status
    {
        return head;
    }
    else
    {
        node1->data = value; // inserting values in node structure
        node1->next = NULL;
        if (head == NULL)
        {
            head = node1;
            return head;
        }
        while (temp->data != target && count < size) // Reaching to the desired node
        {
            count++;
            temp = temp->next;
        }
        node1->next = temp->next; // Storing the address of the next element in the element to be added structure
        temp->next = node1;       // Completing the insertion
    }
    return head;
}
node *insertionatindex(node *head, int index, int value)
{
    int size = sizeOfLinkedList(head); // Preventing the out of index comparison with the help of size of linked list and count variable
    // When the user would pass the index which is out of range i.e. larger than the number of elements in the linked list then we will add that element at the end of the linked list
    node *node1 = (node *)malloc(sizeof(node)); // Dynamically allocating memory
    if (node1 == NULL)                          // Checking for successful memory allocation
    {
        return head;
    }
    node1->data = value; // Inserting the values in the node structure
    node1->next = NULL;
    node *temp = head; // Duplicate of head to preserve the original head
    int i;
    for (i = 1; i < index && i < size; i++) // When the index will be greater than the size loop would run upto the size only
    {
        temp = temp->next;
    }
    if (index == 0 || size == 0)
    { // when the linked list is empty or we have to insert the element at the end
        node1->next = temp;
        return node1;
    }
    node1->next = temp->next;
    temp->next = node1;
    return head;
}
int sizeOfLinkedList(node *head)
{
    int size = 0;
    while (head != NULL)
    {
        size += 1;
        head = head->next;
    }
    return size;
}
node *deleteSpecificElement(node *head, int value)
{
    // handling the NULL pointer linked list
    if (head == NULL)
    {
        return head;
    }
    // Finding the size of the linked list to know that element does not exist when the comparison occurs more than the number of elements in the linked list
    int size;
    size = sizeOfLinkedList(head);
    int count = 1;           // Counting the number of elements of the linked list checked for matching with the value to be deleted
    node *temp = head;       // To preserve the address of head of the linked list i.e. changes are made in this temporary variable
    node *temp2;             // To hold the value deleted in order to free the dynamic memory allocated to the element
    if (temp->data == value) // Checking if the element to be deleted is the first one as after it the element is checked when the temp is one element before the element to be deleted
    {
        temp2 = temp; // Storing the addresss of the element to be deleted in temp2
        head = temp->next;
        free(temp2); // Freeing the memory allocated to temp2
        return head;
    }
    else if (size == 1)
    { // For the condition when there is only one element in the linked list which is not to be deleted
        return head;
    }
    int flag = 1;                       // To check if the element is found or not
    while ((temp->next)->data != value) // while loop to reach the before the element to be deleted
    {
        count++;
        temp = temp->next;
        if (count >= size)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    { // If the element is found
        temp2 = temp->next;
        temp->next = (temp->next)->next;
        free(temp2);
    }
    return head;
}
node *deleteFromBeginning(node *head)
{
    if (head == NULL)
    { // Checking for the NULL linked list
        return head;
    }
    node *temp;
    temp = head;
    head = head->next;
    free(temp);
    return head;
}
node *deleteFromEnd(node *head)     //Time complexity can be reduced to order 1 when we create a pointer to store tail also
{
    if (head == NULL)
    { // If the linked list is NULL
        return head;
    }
    node *temp = head;
    node *temp2;
    if (temp->next == NULL)
    { // If the list has only one element
        head = NULL;
        free(temp);
        return head;
    }
    while ((temp->next)->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->next;
    temp->next = NULL;
    free(temp2);
    return head;
}
node *deleteAtIndex(node *head, int index)
{
    // If the index passed is greater than the size of the linked list then no elements are deleted
    if (head == NULL)
    {
        return head;
    }
    int size;
    size = sizeOfLinkedList(head);
    if (index >= size)
    {
        return head;
    }
    node *temp = head;
    node *temp2;
    if (index == 0)
    {
        temp2 = head;
        head = head->next;
        free(temp2);
        return head;
    }
    for (int i = 0; i < index - 2; i++)
    {
        temp = temp->next;
    }
    temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
    return head;
}
node *deleteAll(node *head)
{
    if (head == NULL)
    {
        return head;
    }
    node *temp2;
    while (head != NULL)
    {
        temp2 = head;
        head = head->next;
        free(temp2);
    }
    return head;
}
int search(node *head, int value)
{
    int index = -1;
    int count = 0;
    if (head == NULL)
    {
        return index;
    }
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            index = count;
            break;
        }
        count++;
        temp = temp->next;
    }
    return index;
}
node *bubbleSort(node *head)
{
    int size, i, j;
    int temporary;
    size = sizeOfLinkedList(head);
    node *temp = head;
    for (i = 0; i < size - 1; i++)
    {
        temp = head;
        for (j = 0; j < size - i - 1; j++)
        {
            if ((temp->data) > (temp->next->data))
            {
                temporary = temp->data;
                temp->data = temp->next->data;
                temp->next->data = temporary;
            }
            temp = temp->next;
        }
    }
    return head;
}
node *selectionsort(node *head)
{
    if (head == NULL || head->next == NULL) // To preserve space else it would handle NULL also without this condition
        return head;
    int size, i, j;
    node *temp = head;
    int min;
    node *Min_index, *Index;
    size = sizeOfLinkedList(head);
    int temporary;
    for (i = 0; i < size - 1; i++)
    {
        temp = head;
        for (j = 0; j < i; j++)
        {
            temp = temp->next;
        }
        Index = temp;
        min = temp->data;
        Min_index = temp;
        temp = temp->next; // Same element which we have assigned as minimum is not to be compared with the min
        for (j = i; j < size - 1; j++)
        {
            if (temp->data < min)
            {
                min = temp->data;
                Min_index = temp;
            }
            temp = temp->next;
        }
        temporary = Index->data;
        Index->data = Min_index->data;
        Min_index->data = temporary;
    }
    return head;
}

void Merging(node *head, int startindex, int mid, int endindex)
{
    int *list1 = (int *)malloc((mid - startindex) * sizeof(int)); // Using arrays to store the temporary data of the two linked list parts
    int *list2 = (int *)malloc((endindex - mid + 1) * sizeof(int));
    int i, j;
    node *temp = head;
    for (i = startindex; i < mid; i++)
    {
        list1[i - startindex] = temp->data;
        temp = temp->next;
    }
    for (j = mid; j <= endindex; j++)
    {
        list2[j - mid] = temp->data;
        temp = temp->next;
    }
    temp = head;
    i = 0;
    j = 0;
    while (i < (mid - startindex) && j < (endindex - mid + 1))
    {
        if (list1[i] < list2[j])
        {
            temp->data = list1[i];
            i++;
            temp = temp->next;
        }
        else
        {
            temp->data = list2[j];
            j++;
            temp = temp->next;
        }
    }
    while (i < (mid - startindex))
    {
        temp->data = list1[i];
        i++;
        temp = temp->next;
    }
    while (j < (endindex - mid + 1))
    {
        temp->data = list2[j];
        j++;
        temp = temp->next;
    }
}
void MergeSort(node *head, int startindex, int endindex)
{
    if (startindex < endindex)
    {
        int mid = (startindex + endindex) / 2 + 1;
        MergeSort(head, startindex, mid - 1);
        MergeSort(head, mid, endindex);           // Passing other half parts of the linked list
        Merging(head, startindex, mid, endindex); // Merging the broken list
    }
}