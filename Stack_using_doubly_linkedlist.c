#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
}*top=NULL;

void push()
{
    //struct node *top=NULL;
    int value;
    struct node *newnode=malloc (sizeof(struct node));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(top==NULL)
    {
        top=newnode;
    }
    else{
        top->prev=newnode;
        newnode->next=top;
        top=newnode;
    }
    
}

void display()
{
   struct node*temp=top;
   while(temp!=NULL)
   {
        printf("%d",temp->data);
        temp=temp->next;
   }
}

void pop()
{
    if(top==NULL)
    {
        printf("\nThe stack is empty...");
    }
    else{
        struct node*temp=top;
        printf("The deleted element is:%d",temp->data);
        top=top->next;
        top->prev=NULL;
        free(temp);
    }

}


void peek()
{
    if(top==NULL)
    {
         printf("\nThe stack is empty...");

    }
    else
    {
        printf("The peek element is:%d",top->data);
    }

}

void main()
{
     while(1)
    {
        printf("\n1.push\n2.display\n3.pop\n4.peek\n");
        printf("Enter the choice:");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                peek();
                break;
            

        }
    }
}