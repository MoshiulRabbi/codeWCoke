#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
struct queue
{
    int data;
    struct queue *next;
}*rear=NULL,*front=NULL;
 
int size=0;
 
int main()
{
    int data,choice;
 
    while(1)
    {
        printf("1: Enqueue \n");
        printf("2: Dequeue \n");
        printf("3: Size of Queue\n");
        printf("4: See front Data\n");
        printf("5: See Rear Data\n");
        printf("6: Display Queue List\n");
        printf("7: Minimum And Maximum\n");
        printf("8: Find an Item\n");
 
        printf("Select your option: ");
        scanf("%d",&choice);
 
        switch(choice)
        {
        case 1:
            printf("Enter data to Enqueue: ");
            scanf("%d",&data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("Queue size is %d",size);
            break;
 
        case 4:
            printf("Front data is: %d\n",front->data);
 
            break;
        case 5:
 
            printf("Rear data is:%d",rear->data);
            break;
        case 6:
            printf("List is\n");
            displayList();
            break;
        case 7:
            minmax();
            break;
        case 8:
            find();
            break;
 
        }
        printf("\n\n");
    }
 
}
void enqueue(int data)
{
    struct queue *temp;
 
    temp=(struct queue *)malloc(sizeof(struct queue));
 
    temp->data=data;
    temp->next=NULL;
 
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
 
    printf("%d enqueued\n",temp->data);
    size++;
 
}
 
void dequeue()
{
    struct queue *temp;
    int data;
 
 
    if(size<= 0 || !front)
    {
        printf("Queue is Empty");
    }
 
    temp=front;
 
    data=temp->data;
    front=front->next;
 
    free(temp);
 
    size--;
 
    printf("%d Dequeued",data);
 
    return 0;
}
 
void displayList()
{
    struct queue *temp;
 
    temp=front;
 
    while(temp!= NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
 
 
 
void minmax()
{
    struct queue *temp;
    int max,min;
 
    temp=front;
 
    max=temp->data;
    min=temp->data;
 
    while(temp!=NULL)
    {
        if(temp->data>max)
        {
            max=temp->data;
        }
        if(temp->data<min)
        {
            min=temp->data;
        }
        temp=temp->next;
    }
    printf("Maximum element is : %d\n",max);
    printf("Minimum element is : %d\n",min);
}
 
void find()
{
    struct queue *temp;
    int num,i,Item;
 
    i=0;
 
    temp=front;
 
    printf("Enter a number to find: ");
    scanf("%d",&num);
 
    while(temp!=NULL)
    {
        if(temp->data==num)
           {
            i++;
            Item=temp->data;
           }
 
        temp=temp->next;
    }
   printf("Item Found %d times: %d\n",i,Item);
}