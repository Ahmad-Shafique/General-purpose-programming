#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e,f,j[10],k[10]={0,0,0,0,0,0,0,0,0,0},max=0;
    for(a=0;a<10;a++)
    {
        scanf("%d",&j[a]);
    }
    for(b=0;b<10;b++)
    {
        for(c=0;c<10;c++)
        {
            if(j[c]>max)
            {
                max=j[c];
            }
        }
        for(d=0;d<10;d++)
        {
            if(k[d]<max)
            {
                k[d]=max;
                break;
            }
        }
        for(e=0;e<10;e++)
        {
            if(j[e]==max)
            {
                j[e]=0;
                max=0;
                break;
            }
        }
    }
    for(f=0;f<10;f++)
    {
        printf("%d\t",k[f]);
    }
    return 0;
}
