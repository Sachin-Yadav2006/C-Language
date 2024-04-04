#include <stdio.h>
typedef struct node(
    int data;
    struct node* next;
)node;
void Merging(node* head,int startindex,int mid, int endindex);
int main(){
    
    return 0;
}
void Merging(node* head,int startindex,int mid,int endindex){
    node* extranode;
    node* startpointer=head; //stores the address of the node at the startindex
    node* midpointer;   //Stores the address of the node at the mid index
    //Reaching to the start index 
    int i,j;
    for(i=0;i<startindex;i++){
        startpointer->startpointer->next;
    }
    midpointer=midpointer->next; //Reaching till the startindex as midindex will always be greater than the startindex
    for(j=startindex;j<mid;j++){
        midpointer=midpointer->next;
    }
    i=startindex;j=mid;        //Now, to count the number of elements added from each part of the linked list in order to stop the execution when one part of the linked list reaches end
    while(i<mid && j<endindex){
        if(startpointer->data < midpointer->data){
            i++;
            startpointer=startpointer->next;
        }
        else{
            extranode=startpointer->data;           
            startpointer->data=midpointer->data;
            j++;
            midpointer=midpointer->next;
        }
    }

}