#include <stdio.h>
int main()
{


int first,second,sum,sub,mul,div;
float mod;

printf("Enter two number \n");
scanf("%d %d",&first , &second);



sum= first+second;
sub= first-second;
mul= first*second;
div= first/second;
mod= first%second;

printf("Sum is %d\n",sum);
printf("Sub is %d\n",sub);
printf("Mul is %d\n",mul);
printf("Div is %d\n",div);
printf("Mod is %f\n",mod);

return 0;

}
