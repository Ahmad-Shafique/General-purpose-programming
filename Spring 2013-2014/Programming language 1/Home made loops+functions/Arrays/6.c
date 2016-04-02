#include<stdio.h>

int main()
{
    int a,b,c[10];
    for(a=0;a<10;a++)
    {
        scanf("%d",&c[a]);
        b=c[0];
    }
    for(a=1;a<10;a++)
    {
        if(c[a]<b)
        {
            b=c[a];
        }
    }
    printf("%d",b);
    return 0;
}
