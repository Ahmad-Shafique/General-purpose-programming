#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    int a,b,c;
    printf("please enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(b>c))
    {
        printf("the smallest number is %d",c);
    }
    else if((b>a)&&(a>c))
    {
        printf("the smallest number is %d",c);
    }
    else if((b>c)&&(c>a))
    {
        printf("the smallest number is %d",a);
    }
    else if((c>a)&&(a>b))
    {
        printf("the smallest number is %d",b);
    }
    else if((c>b)&&(b>a))
    {
        printf("the smallest number is %d",a);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}






