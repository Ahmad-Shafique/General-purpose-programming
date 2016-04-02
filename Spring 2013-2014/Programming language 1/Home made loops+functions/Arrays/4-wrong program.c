#include<stdio.h>

int main()
{
    int a,b,c[k],d,sum=0,k;
    scanf("%d%d",&a,&b);
    k=b-a;
    for(l=a,ar=0,d=2;l<=b-1,d<c[ar],ar<=b-a;l++,ar++,d++)
    {
        l=c[ar];
        if(c[ar]%d==0)
        continue;
        sum=sum+c[ar];
    }
    printf("%d",sum);
    return 0;
}
