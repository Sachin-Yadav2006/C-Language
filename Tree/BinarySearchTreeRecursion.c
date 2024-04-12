#include <stdio.h>
#include <stdlib.h>
typedef struct BSTnode
{
    int data;
    struct BSTnode *left;
    struct BSTnode *right;
} BSTnode;
BSTnode *root = NULL;
void InsertionInBST(BSTnode *temp_root, int data);
int main(){
    InsertionInBST(root,10);
    printf("The value inserted successfully\n");
    InsertionInBST(root,23);
    printf("The value inserted to the right\n");
    InsertionInBST(root,1);
    printf("The value inserted to the left\n");
    InsertionInBST(root,12);
}
void InsertionInBST(BSTnode *temp_root, int data){
    if (temp_root == NULL)
    {
        BSTnode *node = (BSTnode *)malloc(sizeof(BSTnode));
        node->data=data;
        node->left=node->right=NULL;
        if (node == NULL)
        {
            printf("The memory not allocated\n");
            return;
        }
        else
        {
            root = node;
            return;
        }
    }
    else
    {
        if(temp_root->data<=data){
            InsertionInBST(temp_root->right,data);
        }
        else{
            InsertionInBST(temp_root->left,data);
        }
    }
}