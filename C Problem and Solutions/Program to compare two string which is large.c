#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    int i;
 
    printf("String 1 : ");
    gets(a);
    printf("String 2 : ");
    gets(b);
 
    i=strcmp(a,b);
 
    if(i==0)
    {
        printf("Both strings are equal");
    }
    else if(i>0)
    {
        printf("String 1 is bigger");
    }
    else
    {
        printf("String 2 is bigger");
    }
    return 0;
    }