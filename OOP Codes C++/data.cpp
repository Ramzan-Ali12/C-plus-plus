
#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    //declaring nodes
    struct node *a,*b,*c;

    //Implement task 1 here
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    a->data=100;
    b->data=200;
    c->data=300;
    





    //Implement task 2 here
    a->next=b;
    b->next=c;
    c->next=NULL;




    //Don't change the below code
    struct node *temp = a;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}



