#include<stdio.h>
int main()
{
    char n[100],ch;
    int i,freq=0;
 
    printf("Enter String: ");
    gets(n);
 
    printf("Search a Character: ");
    scanf("%c",&ch);
 
    for(i=0; n[i]!='\0'; i++)
    {
        if(ch==n[i])
        freq++;
    }
    printf("YES! %c found %d Time(s)",ch,freq);
 
    return 0;
}
