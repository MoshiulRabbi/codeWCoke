#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[200];
    int comp;
 
    printf("Enter String: ");
    gets(a);
 
    strcpy(b,a);
    strrev(b);
 
    comp=strcmp(a,b);
 
    if(comp==0)
    {
        printf("This is a palindrome");
    }
    else
    {
        printf("This is not a palindrome");
    }
    return 0;
}