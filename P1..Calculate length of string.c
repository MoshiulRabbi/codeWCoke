#include<stdio.h>
int main()
{
    char n[100];
    int i;

    printf("Enter String: ");
    scanf("%s",n);

    for(i=0; n[i]!='\0'; i++);
    printf("Length %d",i);

return 0;

}
