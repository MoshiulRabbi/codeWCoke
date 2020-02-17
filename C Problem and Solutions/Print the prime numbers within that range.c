#include <stdio.h>
int main()
{
    int x, y, i, flag;
    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &x, &y);
    printf("Prime numbers between %d and %d are: ", x, y);
    while (x < y)
    {
        flag = 0;
        for(i = 2; i <= x/2; ++i)
        {
            if(x % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", x);
        ++x;
    }
    return 0;
}