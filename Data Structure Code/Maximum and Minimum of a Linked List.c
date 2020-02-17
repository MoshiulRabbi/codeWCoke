#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*head;
 
int main()
{
    int n,max,min;
 
    printf("Enter Total Number of Node: ");
    scanf("%d",&n);
 
    createList(n);
 
    printf("\nList is\n");
 
    displayList();
 
    max=maximum();
    min=minimum();
 
    printf("\nMaximum number %d and Minimum number is %d ",max,min);
 
    return 0;
 
}
void createList(int n)
{
    struct node *p,*temp;
    int i,data;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter data for node 1: ");
    scanf("%d",&data);
 
    temp->data=data;
    temp->next=NULL;
    p=temp;
    head=temp;
 
    for(i=2; i<=n; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&data);
 
        temp->data=data;
        temp->next=NULL;
 
        p->next=temp;
        p=p->next;
    }
}
void displayList()
{
    struct node *temp;
    temp=head;
 
    while(temp != NULL)
    {
        printf("\n%d\n",temp->data);
        temp=temp->next;
    }
}
int maximum()
{
    int maximum=head->data;
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(maximum<temp->data)
        {
            maximum=temp->data;
        }
        temp=temp->next;
    }
    return maximum;
}
int minimum()
{
    int minimum=head->data;
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(minimum>temp->data)
        {
            minimum=temp->data;
        }
        temp=temp->next;
    }
    return minimum;
}