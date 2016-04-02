#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,n,m1,m2=0,s;
    scanf("%d",&s);
    int c[s],d[s];
    for(x=0;x<s;x++)
    {
        scanf("%d",&c[x]);
    }
    m1=c[0];
    for(x=1;x<s;x++)
    {
        if(c[x]>m1)
        {
            m1=c[x];
        }
    }
    d[0]=m1;
    for(x=1;x<s;x++)
    {
        for(y=0;y<s;y++)
        {
            if(c[y]>m2&&m2<d[x-1])
            {
                m2=c[y];
            }
        }
        d[x]=m2;
    }
    for(x=0;x<s;x++)
    {
        printf("%d\n",d[x]);
    }
    return 0;
}
