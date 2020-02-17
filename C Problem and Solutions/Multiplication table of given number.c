#include <stdio.h>
int main()
{
    int i,j;

    printf("Input the number to calculate :\n");
    scanf("%d",&i);

    for(j=1;j<=10;j++)

    {
        printf("%d X %d = %d\n",i,j,i*j);
    }

}