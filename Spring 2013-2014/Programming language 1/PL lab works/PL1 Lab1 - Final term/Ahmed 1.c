#include<stdio.h>

int main()
{
    int a,c[10],sum=0;
    for(a=0;a<10;a++)
    {
        scanf("%d",&c[a]);
        sum=sum+c[a];
    }
    printf("\n%d",sum);
    return 0;
}
