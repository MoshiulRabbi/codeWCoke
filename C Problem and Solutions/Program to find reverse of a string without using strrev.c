#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,length=0;
 
    printf("Enter String: ");
    gets(a);
 
    for(i=0;a[i]!='\0';i++)
    {
        length++ ;
    }
    for(j=0,i=length-1;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
 
    printf("%s",b);
 
    return 0;
}