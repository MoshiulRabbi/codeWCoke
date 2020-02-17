#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*head;
 
 
int main()
{
    int n,m,data;
    printf("Enter total number of node: ");
    scanf("%d",&n);
 
    createList(n);
 
    printf("\nList is\n ");
 
    displaylist();
 
    printf ("\n\nEnter data to insert at beginning of the list: ");
    scanf ("%d",&data);
    AddAtBeg(data);
 
    displaylist();
 
    printf ("\n\nEnter data to insert at end of the list: ");
    scanf ("%d",&m);
    AddAtEnd(m);
 
    displaylist();
 
    return 0;
}
void createList(int n)
{
    struct node *p,*temp;
    int i,data;
 
    temp=(struct node *)malloc(sizeof(struct node));
 
    printf("\nEnter the data of the node 1: ");
    scanf("%d",&data);
 
    temp->data=data;
    temp->next=NULL;
 
    p=temp;
    head=temp;
 
    for(i=2; i<=n; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
 
        printf("Enter the data of the node %d: ",i);
        scanf("%d",&data);
 
        temp->data=data;
        temp->next=NULL;
 
        p->next=temp;
        p=p->next;
 
    }
 
}
 
void displaylist()
{
    struct node *temp;
    temp=head;
 
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
void AddAtEnd(int data)
{
    struct node *newNode, *temp;
 
    newNode = (struct node*)malloc(sizeof(struct node));
 
    newNode->data = data;
    newNode->next = NULL;
 
    temp = head;
 
    while(temp->next != NULL)
        temp = temp->next;
 
    temp->next = newNode;
 
}
void AddAtBeg(int data)
{
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=data;
    tmp->next=head;
    head=tmp;
}