#include <stdio.h>
int main()
{
    int weekday;
 
    printf("Enter Weekday: (1-7)\n");
    scanf("%d",&weekday);
 
    if(weekday == 1)
    {
        printf("Today is Saturday");
    }
    else if(weekday == 2)
    {
        printf("Today is Sunday");
 
    }
    else if(weekday == 3)
    {
        printf("Today is Monday");
 
    }
    else if(weekday == 4)
    {
        printf("Today is Tuesday");
    }
    else if(weekday == 5)
    {
        printf("Today is Wednesday");
    }
    else if(weekday == 6)
    {
        printf("Today is Thursday");
    }
    else if(weekday == 7)
    {
        printf("Today is Friday");
 
    }
    else
    {
        printf("Please Input between 1-7");
    }
 
    return 0;
}