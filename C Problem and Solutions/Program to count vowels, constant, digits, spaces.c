#include<stdio.h>
int main()
{
    char n[100];
    int i,vowel=0,consonants=0,digit=0,space=0;
 
    printf("Enter a line: ");
    gets(n);
 
    for(i=0; n[i]!='\0'; i++)
    {
        if(n[i]=='a' || n[i]=='e' || n[i]=='i'||n[i]=='o'|| n[i]=='u'||
 
                n[i]=='A' || n[i]=='E' || n[i]=='I'||n[i]=='O'|| n[i]=='U')
        {
            vowel++;
        }
        else if(n[i]>='a'&& n[i]<='z'||n[i]>='A'&& n[i]<='Z')
        {
            consonants++;
        }
        else if(n[i]>='0'&& n[i]<='9')
        {
            digit++;
        }
        else if(n[i]==' ')
        {
            space++;
        }
 
    }
    printf("Vowel in the line is %d\n",vowel);
    printf("Consonant in the line is %d\n",consonants);
    printf("Digit in the line is %d\n",digit);
    printf("Space in the line is %d\n",space);
 
    return 0;
 
}