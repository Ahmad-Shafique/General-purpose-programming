#include<stdio.h>
#include<stdlib.h>

int main()
{
    int v=0,sum=0;
    for(;v<=10;)
    {
        sum+=v;
        scanf("%d",&v);
    }
    printf("%d",sum);
}
