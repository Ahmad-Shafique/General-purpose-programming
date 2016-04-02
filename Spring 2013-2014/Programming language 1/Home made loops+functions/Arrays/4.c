#include<stdio.h>

int main()
{
    int a,b,d,sum=0,k,l,ar;
    scanf("%d%d",&a,&b);
    k=b-a;
    int c[k];
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
