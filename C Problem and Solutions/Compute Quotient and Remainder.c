#include <stdio.h>
int main()
{
 
    int dividend,divisor,quotient,reminder;
 
    printf("Enter Dividend \n");
    scanf("%d",&dividend);
 
    printf("Enter Divisor: \n");
    scanf("%d",&divisor);
 
 
    quotient=dividend / divisor;
 
    reminder= dividend % divisor;
 
    printf("Quoteint is %d \n",quotient);
    printf("Reminder is %d \n",reminder);
 
 
    return 0;
 
 
 
}