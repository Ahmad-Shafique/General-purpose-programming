#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("please enter a number of four digite\n");
    scanf("%d",&a);
    b=a/1000;
    e=a%1000;
    c=e/100;
    f=e%100;
    d=f/10;
    g=f%10;
    printf("%d is first number\n",b);
    printf("%d is second number\n",c);
    printf("%d is third number\n",d);
    printf("%d is fourth number\n",g);

    return 0;
}
