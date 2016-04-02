#include<stdio.h>
#include<math.h>
#include<stdlib.h>


{
    printf("In this program, we will find the smallest of three no.s\n");
    printf("please enter 3 values\n\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a<b)&&(b<c))
    {
        printf("Value %d is smallest",a);
    }
    else if((b<a)&&(b<c))
    {
        printf("Value %d is the smallest",b);
    }
    else if((c<a)&&(c<b))
    {
        printf("Value %d is the smallest",c);
    }
    else if((a<c)&&(b<c))
    {
        printf("Value %d is the smallest",a);
    }
    else if((b<a)&&(c<a))
    {
        printf("Value %d is the smallest",b);
    }
    else if((a<b)&&(c<b))
    {
        printf("Value %d is the smallest",c);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
