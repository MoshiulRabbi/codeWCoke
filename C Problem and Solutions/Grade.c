#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float per;
 
    printf("Enter five subjects mark: \n");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
 
    per=(sub1+sub2+sub3+sub4+sub5) / 5.0;
 
 
    if(per>=90)
    {
        printf("Grade A+ ");
    }
    else if(per>=80)
    {
        printf("Grade A");
    }
    else if(per>=70)
    {
        printf("Grade B");
    }
    else if(per>=60)
    {
        printf("Grade C");
    }
    else if(per>=50)
    {
        printf("Grade D");
    }
    else if(per>=50)
    {
        printf("Grade E");
    }
 
    else
    {
        printf("Grade F");
    }
 
 
    return 0;
 
}