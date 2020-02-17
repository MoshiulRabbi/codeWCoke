#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
 
int main()
{
    int n,m;
    printf("Enter Total Number Of Node: ");
    scanf("%d",&n);
 
    createList(n);
 
    printf("\nList is\n ");
 
    displaylist();
 
    printf("\nEnter the position you want to delete: ");
    scanf("%d",&m);
    deletelist(m);
 
    displaylist();
 
    return 0;
}
void createList(int n)
{
    struct node *p,*temp;
    int i,data;
 
    temp=(struct node *)malloc(sizeof(struct node));
 
    printf("Enter the data of the node 1: ");
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
void deletelist(int n)
{
    struct node *temp1=head;
 
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
 
    for(i=0; i<n-2; i++)
 
        temp1=temp1->next;
 
    struct node *temp2=temp1->next;
 
    temp1->next=temp2->next;
    free(temp2);
 
 
}