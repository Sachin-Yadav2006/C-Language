// TEST
// SET 03
// Question 1
// Implement Binary Search Tree with Insert, Search, and Print Operations

#include <stdio.h>
#include <stdlib.h>

// Structure of the Binary Search Tree

typedef struct BST_node
{
    struct BST_node *left;
    struct BST_node *right;
    int data;
} BST_node;

// Inserting the element in the Binary Search Tree
BST_node *BST_insert(BST_node *head, int data)
{
    //Allocating the memory and if allocated creating the node 
    BST_node *node = (BST_node *)malloc(sizeof(BST_node));
    BST_node *temp = head;
    BST_node *prev_node;
    if (node == NULL)
    {
        printf("Memory not allocated!!");
        return head;
    }
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    //Condition when the BST is NULL
    if (head == NULL)
    {
        head = node;
        return head;
    }
    else
    {
        //Reaching to the appropriate position of where the value is to be inserted
        while (temp != NULL)
        {
            if (temp->data < data)
            {
                prev_node = temp;
                temp = temp->right;
            }
            else
            {
                prev_node = temp;
                temp = temp->left;
            }
        }
        //Now, inserting the node at its appropriate position
        if (prev_node->data < data)
        {
            prev_node->right = node;
        }
        else
        {
            prev_node->left = node;
        }
    }
    return head;
}

// Printing the elements of the Binary Search Tree
// Inorder Traversal

void InorderTraversalBST(BST_node *head)
{
    //IN inorder traversal first left value is printed then the head and then the right
    if (head == NULL)
    {
        return;
    }
    InorderTraversalBST(head->left);
    printf("%d ", head->data);
    InorderTraversalBST(head->right);
}

// Preorder Traversal
void PreorderTraversalBST(BST_node *head)
{
    //In preorder traversal first the head value is printed then the left and then the right 
    if (head == NULL)
    {
        return;
    }

    printf("%d ", head->data);
    PreorderTraversalBST(head->left);
    PreorderTraversalBST(head->right);
}

// Post Order Traversal

void PostorderTraversalBST(BST_node *head)
{
    //In post order traversal first the left value is printed then the right and then the head is printed.
    if (head == NULL)
    {
        return;
    }
    PostorderTraversalBST(head->left);

    PostorderTraversalBST(head->right);

    printf("%d ", head->data);
}

// Searching in the BST

int Search_BST(BST_node *head, int key)
{
    int flag = 0;   //TO check if the value found or not 
    while (head != NULL)
    {
        if (head->data == key)
        {
            flag = 1;
            break;
        }
        else if (head->data < key)  //If the value is greater then we are required to move right 
        {
            head = head->right;
        }
        else                        //IF the value is less then we have to move left 
        {
            head = head->left;
        }
    }
    return flag;
}

int main()
{
    BST_node *head = NULL;
    printf("Welcome to the Binary Search Implementation Section!!");
    int choice;
    while (1)
    {
        printf("\n\nWhat do you want to perform today??? \n Please select one of the options from the following:\n");
        printf("1. Insert element in the BST\n2. Inorder Traversal of the BST\n3. Preorder Traversal of the BST\n4. PostOrder Traversal of the BST\n5. Search an element in the BST\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element to be inserted\n");
            int element;
            scanf("%d", &element);
            head = BST_insert(head, element);
            printf("\nValue inserted successfully!!\n");
            break;
        case 2:
            printf("\nThe elements of the Binary Search Tree are : \n");
            InorderTraversalBST(head);
            break;
        case 3:
            printf("\nThe elements of the Binary Search Tree are : \n");
            PreorderTraversalBST(head);
            break;
        case 4:
            printf("\nThe elements of the Binary Search Tree are : \n");
            PostorderTraversalBST(head);
            break;
        case 5:
            printf("\nEnter the element to be searched in the BST:");
            int key;
            scanf("%d",&key);
            int flag = Search_BST(head, key);
            if (flag == 1)
                printf("The element exists in the BST ");
            else
                printf("The elements does not exist in the BST");
            break;
        case 6:
            printf("Thanks for visiting this section!!");
            break;
        default:
            printf("Invalid Input !!\nPlease try again!!");
            break;
        }
        if(choice==6){
            break;
        }
    }
    return 0;
}