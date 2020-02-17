#include<stdio.h>
int main()
{
 
    char ch;
 
    printf("Enter any Character: \n");
    scanf("%c",&ch);
 
 
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')  )
        printf("%c Character is Alphabet\n",ch);
 
    else if (ch>='0' && ch<='9')
 
    {
 
        printf("%c is Digit\n",ch);
 
    }
    else
    {
 
        printf("%c is special character.", ch);
 
    }
 
 
    return 0;
}