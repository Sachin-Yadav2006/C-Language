#include <stdio.h>
#include <stdlib.h>
// creating the structure of the Binary Search Tree Node
typedef struct BSTnode
{
    int data;
    struct BSTnode *left;
    struct BSTnode *right;
} BSTnode;

BSTnode *root = NULL;
void InsertionINBST(int data);
void InOrderTraversalBST(BSTnode *rootone);
void PreOrderTraversalBST(BSTnode *rootone);
void PostOrderTraversalBST(BSTnode *rootone);
BSTnode *SearchBST(int key);
int MaxBST(BSTnode *rootone);
int MinBST(BSTnode *rootone);
void DeleteBST(int key);
int InorderSuccessor(BSTnode* temp_root,int key,int successor,int flag);


int main()
{
    InsertionINBST(10);
    InsertionINBST(11);
    InsertionINBST(9);
    InsertionINBST(12);
    InsertionINBST(199);
    InsertionINBST(12);
    InsertionINBST(0);
    InsertionINBST(1);

    printf("\n\nInorder Traversal \n");
    InOrderTraversalBST(root);

    printf("\n\nPreorder Traversal\n");
    PreOrderTraversalBST(root);

    printf("\n\nPostorder Traversal\n");
    PostOrderTraversalBST(root);

    // searching the 12 in the tree
    BSTnode *add = SearchBST(12);
    if (add == NULL)
    {
        printf("\nThe value not found in the tree\n\n");
    }
    else
    {
        printf("\nThe value found at the address %d\n\n", add);
    }

    printf("The minimum element of tree is %d\n\n", MinBST(root));
    printf("The maximum element of the tree is %d\n\n", MaxBST(root));

    return 0;
}

void InsertionINBST(int data)
{
    BSTnode *node = (BSTnode *)malloc(sizeof(BSTnode));

    if (node == NULL)
    {
        printf("The memory not allocated\n");
        return;
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    if (root == NULL)
    {
        root = node;
        return;
    }
    BSTnode *temp_root = root, *previous_Node = root; // Previous node for storing the address of the previous node before the node where the temp_root is pointing as at last it would point to NULL
    // This loop helps to reach at the appropriate position where the new node is to be added
    while (temp_root != NULL)
    {
        if (data <= temp_root->data)
        {
            previous_Node = temp_root;
            temp_root = temp_root->left;
        }
        else
        {
            previous_Node = temp_root;
            temp_root = temp_root->right;
        }
    }
    if (previous_Node->data < data)
    {
        previous_Node->right = node;
    }
    else
    {
        previous_Node->left = node;
    }
}

void InOrderTraversalBST(BSTnode *rootone)
{
    if (rootone == NULL)
    {
        return;
    }
    InOrderTraversalBST(rootone->left);
    printf("%d ", rootone->data);
    InOrderTraversalBST(rootone->right);
}

void PreOrderTraversalBST(BSTnode *rootone)
{
    if (rootone == NULL)
    {
        return;
    }
    printf("%d ", rootone->data);
    PreOrderTraversalBST(rootone->left);
    PreOrderTraversalBST(rootone->right);
}

void PostOrderTraversalBST(BSTnode *rootone)
{
    if (rootone == NULL)
    {
        return;
    }
    PostOrderTraversalBST(rootone->left);
    PostOrderTraversalBST(rootone->right);
    printf("%d ", rootone->data);
}

BSTnode *SearchBST(int key)
{
    BSTnode *temp_root = root;
    while (temp_root != NULL)
    {
        if (temp_root->data == key)
        {
            break;
        }
        else if (temp_root->data < key)
        {
            temp_root = temp_root->right;
        }
        else
        {
            temp_root = temp_root->left;
        }
    }
    return temp_root;
}

int MaxBST(BSTnode *rootone)
{
    if (rootone == NULL)
        return -1;
    while (rootone->right != NULL)
    {
        rootone = rootone->right;
    }
    return rootone->data;
}

int MinBST(BSTnode *rootone)
{
    if (rootone == NULL)
        return -1;
    while (rootone->left != NULL)
    {
        rootone = rootone->left;
    }
    return rootone->data;
}

int InorderSuccessor(BSTnode* temp_root,int key,int successor,int flag){
    if(flag==1) return 0;
    if(temp_root==NULL){
        return 0;
    }
    InorderSuccessor(temp_root->left,key,successor,flag);
    if(temp_root->data > key){
        flag=1;
        successor=temp_root->data;
    }
    InorderSuccessor(temp_root->right,key,successor,flag);
    return successor;
}

void DeleteBST(int key)
{
    BSTnode* temp_root=root;
    BSTnode* prev_node;
    BSTnode* node; 
    char direction;
    while(temp_root!=NULL)
    {
        if(temp_root->data==key){
            if(temp_root->right==NULL && temp_root->left==NULL){
                if(direction=='l'){
                    prev_node->left=NULL;
                    free(temp_root);
                }
                else{
                    prev_node->right=NULL;
                    free(temp_root);
                }
            }
            else if(temp_root->right==NULL){
                temp_root->data=temp_root->left->data;
                node=temp_root->left;
                temp_root->left=NULL;
                free(node);
            }
            else if(temp_root->left==NULL){
                temp_root->data=temp_root->right->data;
                node=temp_root->right;
                temp_root->right=NULL;
                free(node);
            }
            else{
                    
            }
        }
        else if(temp_root->data>key){
            direction='l';
            prev_node=temp_root;
            temp_root=temp_root->left;
        }
        else{
            direction='r';
            prev_node=temp_root;
            temp_root=temp_root->right;
        }
    }
    
}