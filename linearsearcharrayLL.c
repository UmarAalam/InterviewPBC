#include <stdio.h>
#include<stdlib.h>
//Linear search using array

int arrayls(int *arr,int size,int target)
{
    for(int i=0;i<size;i++)
    {
     if(arr[i]==target)
         return i;
    }
    return 0;
}

//Linear search using linked list
struct node
{
    int data;
    struct node *link;
};
struct node temp1;

struct node *linkedls(struct node  *head,int target)
{
    if(head)
    {
    while(head)
    {
        if((head->data)==target)
            return head;
    }
        head=head->link;
    }
    return head;
}

int main(int argc, const char * argv[]) {
    
    int arr[]={2,4,3,5,5,6,7,9};
    int target=5;
  // printf("%d",arrayls(arr,sizeof(arr)/sizeof(arr[0]),target));
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *fourth=NULL;
    struct node *fifth=NULL;
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    
    head->data=2;
    head->link=second;
    second->data=4;
    second->link=third;
    third->data=3;
    third->link=fourth;
    fourth->data=5;
    fourth->link=fifth;
    fifth->data=5;
    fifth->link=NULL;
    
    struct node *temp=linkedls(head,target);
    printf("%d",temp->data);
    return 0;
}
