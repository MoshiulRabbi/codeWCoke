#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev, *next;
}*head,*last;
 
int main()
{
    int n;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);
    createList(n);
    printf("Data from First to Last:\n");
    displayAccending();
    printf("Data from Last to First:\n");
    displaydecending();
    insert();
    printf("Data from First to Last:\n");
    displayAccending();
    printf("Data from Last to First:\n");
    displaydecending();
    deletenode();
    printf("Data from First to Last:\n");
    displayAccending();
    printf("Data from Last to First:\n");
    displaydecending();
}
void createList(int n)
{
    struct Node *temp;
    head=NULL;
    last=NULL;
    int data, i;
    printf("Input data for Node 1: ");
    scanf("%d",&data);
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=data;
    head->prev=NULL;
    head->next=NULL;
    last=head;
    for(i=2; i<=n; i++)
    {
        printf("input data for Node %d: ",i);
        scanf("%d",&data);
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=data;
        temp->prev=last;
        temp->next=NULL;
        last->next=temp;
        last=last->next;
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
    temp=last;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->prev;
    }
}
void insert()
{
 
    struct Node *newnode,*temp1=head,*temp2;
    int pos,data,i;
    printf("Enter the position to insert a Node: ");
    scanf("%d",&pos);
    printf("Input data for insert: ");
    scanf("%d",&data);
    for(i=1; i<pos-1; i++)
    {
        temp1=temp1->next;
    }
 
 
    if(temp1==last)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=data;
        newnode->prev=last;
        newnode->next=NULL;
        last->next=newnode;
        last=newnode;
    }
    else
    {
        if(pos==1)
        {
            newnode=(struct Node*)malloc(sizeof(struct Node));
            newnode->data=data;
            newnode->next=head;
            newnode->prev=NULL;
            head->prev=newnode;
            head=newnode;
        }
        else
        {
 
            newnode=(struct Node*)malloc(sizeof(struct Node));
            newnode->data=data;
            temp2=temp1->next;
            newnode->prev=temp1;
            temp1->next=newnode;
            temp2->prev=newnode;
            newnode->next=temp2;
        }
    }
}
void deletenode()
{
    struct Node *temp1,*temp2;
    int pos,i;
    temp1=head;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        temp1=temp1->next;
    }
    if (pos==1)
    {
        head=temp1->next;
        temp1->next->prev=temp1->prev;
        free(temp1);
        return;
    }
    if(temp1==last)
    {
       temp1=last;
       last=last->prev;
       last->next=NULL;
       free(temp1);
    }
    else
    {
        temp1->prev->next=temp1->next;
        temp1->next->prev=temp1->prev;
        free(temp1);
    }
 
}