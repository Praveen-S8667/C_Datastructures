#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
}*front=NULL,*rear=NULL;


void enqueue()
{
    int value;
    scanf("%d",&value);
    struct node*newnode=malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=value;
    newnode->next=NULL;
    if(rear==NULL)
    {
        front=newnode;
        rear=newnode;

    }
    else{
        rear->next=newnode;
        newnode->prev=rear;
        rear=newnode;
    }
}

void dequeue()
{
    struct node*temp=front;
    printf("The deleted element is:%d",temp->data);
    front->next->prev=NULL;
    front=front->next;
    free(temp);
}

void display()
{
    struct node*temp=front;
    if(temp==NULL)
    {
        printf("\nThe stack is empty...");
    }

    else{
    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    }
}



void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Please enter a correct choice!\n");
            break;
        }
    }
}