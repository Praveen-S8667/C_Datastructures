#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*tail;
void insert()
{
    int value;
    struct node *newnode= malloc(sizeof(struct node));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;

    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void display()
{
    int count=0;
    struct node*temp=head;
    printf("The elements in the linked list are:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\nThe number of elements in the linked list is: %d",count);
    
}
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        insert();
    }
    display();

}
