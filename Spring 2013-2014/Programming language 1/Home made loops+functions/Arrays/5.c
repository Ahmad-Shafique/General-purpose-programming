#include<stdio.h>

int main()
{
    int a=0,sum=0;
    int c[10];
    for (a;a<10;a++)
    {
        scanf("%d",&c[a]);
        sum=sum+c[a];
    }
    printf("%d",sum);
    return 0;
}
