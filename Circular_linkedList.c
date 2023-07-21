#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head,*tail;
void insert()
{
    struct node*newnode=malloc(sizeof(struct node));
    int value;
    scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;

    }
    else
    {
       tail->next=newnode;
       tail=newnode;
       tail->next=head;
    }
}

void reverse()
{
    struct node*temp=head;
    struct node*prev=NULL;
    struct node*nect=NULL;
    while(temp!=head)
    {
        nect=temp->next ; 
        temp->next=prev;
        prev=temp;
        temp=nect;
    }
    head=prev;

}

void display()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
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