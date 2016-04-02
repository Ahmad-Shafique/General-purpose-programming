#include<stdio.h>

int main()
{
    int a,b=10000,c[10],sum=0;
    for(a=0;a<10;a++)
    {
        scanf("%d",&c[a]);
        if(b>c[a])
        {
            b=c[a];
        }
    }
    printf("\n%d\n\n\n",b);
    return 0;
}
