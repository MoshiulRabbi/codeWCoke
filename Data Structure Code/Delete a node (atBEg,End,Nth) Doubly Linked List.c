#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}*head,*p;
void createlist(int n);
void displayAccending();
void displaydecending();
void Delete();
int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    createlist(n);
    printf("Data in the list From 1st to last:\n");
    displayAccending();
    printf("Data in the list from last to first:\n");
    displaydecending();
    Delete();
    printf("Data in the list From 1st to last:\n");
    displayAccending();
    printf("Data in the list from last to first:\n");
    displaydecending();
    return 0;
 
}
void createlist(int n)
{
    struct Node *temp;
    head=NULL;
    p=NULL;
    int data, i;
    head= (struct Node*)malloc(sizeof(struct Node));
    printf("Input Data for node no 1: ");
    scanf("%d",&data);
    head->data=data;
    head->prev=NULL;
    head->next=NULL;
    p=head;
    for(i=2; i<=n; i++)
    {
        temp= (struct Node*)malloc(sizeof(struct Node));
        printf("Input data for node no %d: ",i);
        scanf("%d",&data);
        temp->data=data;
        temp->prev=p;
        temp->next=NULL;
        p->next=temp;
        p=p->next;
 
    }
 
}
void displayAccending()
{
    struct Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void displaydecending()
{
    struct Node *temp;
    temp=p;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->prev;
    }
}
 
void Delete()
{
    struct Node *temp1;
    int pos,i;
    temp1=head;
    printf("Enter node number for Delete: ");
    scanf("%d",&pos);
    for (i=1; i<pos; i++)
    {
        temp1=temp1->next;
    }
    if (pos==1)
    {
        head= temp1->next;
        temp1->next->prev= temp1->prev;
        free(temp1);
        return ;
    }
    else if (temp1==p)
    {
        temp1=p;
        p=p->prev;
        p->next = NULL;
        free(temp1);
    }
    else
    {
        temp1->prev->next=temp1->next;
        temp1->next->prev=temp1->prev;
        free(temp1);
    }
}