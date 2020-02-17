#include <stdio.h>
int main()
{
    double x1,y2,z3;

    printf("Enter three Numbers: ");
    scanf("%lf %lf %lf",&x1,&y2,&z3);

    if(x1>=y2)
    {
        if(x1>=z3)
            printf("%.2lf is the largest number",x1);
        else
            printf("%.2lf is the largest number",z3);

    }

    else
    {

        if(y2>=z3)
            printf("%.2lf is the largest number",y2);
        else
            printf("%.2lf is the largest number",z3);
    }

    return 0;
}