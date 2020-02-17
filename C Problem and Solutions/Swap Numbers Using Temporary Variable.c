#include <stdio.h>
int main()
{
 
    int num1,num2, tem;
 
    printf("Enter two integer: ");
    scanf("%d %d",&num1,&num2);
 
   printf("Before Swapping\nFirst Integer %d\nSecond Integer %d\n",num1,num2);
 
   tem=num1;
   num1=num2;
   num2=tem;
 
   printf("After Swapping\nFirst Integer %d\nSecond Integer %d",num1,num2);
   return 0;
 
 
}