#include <stdio.h>
#include <stdlib.h>
//creating the structure of the Binary Search Tree Node
typedef struct BSTnode{
    int data;
    struct BSTnode* left;
    struct BSTnode* right;
}BSTnode;
BSTnode* root=NULL;
void InsertionINBST(int data){
    BSTnode* node=(BSTnode*) malloc(sizeof(BSTnode));

    if(node==NULL){
        printf("The memory not allocated\n");
        return;
    }
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    if(root==NULL){
        root=node;
        return;
    }
    BSTnode* temp_root=root,*previous_Node=root;      //Previous node for storing the address of the previous node before the node where the temp_root is pointing as at last it would point to NULL
    //This loop helps to reach at the appropriate position where the new node is to be added
    while (temp_root!=NULL)
    {
        printf("Inside the while loop\n");
        if(data<=temp_root->data){
            previous_Node=temp_root;
            temp_root=temp_root->left;
        }
        else{
            previous_Node=temp_root;
            temp_root=temp_root->right;
        }
    }
    if(previous_Node->data<data){
        previous_Node->right=node;
    }
    else{
        previous_Node->left=node;
    }
}
int main(){
    InsertionINBST(10);
    printf("Value inserted successfully");
    InsertionINBST(11);
    printf("The second value inserted successfully\n");
    InsertionINBST(9);
    printf("The third value inserted successfully\n");
    return 0;
}