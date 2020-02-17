#include<stdio.h>
int main()
{
    char a[200],b[200];
    int i,j,length=0;
 
    printf("Enter String 1: ");
    gets(a);
    printf("Enter String 2: ");
    gets(b);
 
    for(i=0;a[i]!='\0' ;i++)
    {
        length++;
    }
    for(j=0;b[j]!='\0';)
    {
        a[length+j]=b[j];
        j++;
    }
    printf("%s\n",a);
 
    return 0;
}