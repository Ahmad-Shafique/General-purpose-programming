#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=2,y=1,sum=0,pos;
    for(i=1;i<11;i++)
    {
        sum=sum+x;
        if(pos%2!=0)
        {
            i=i+y;
            printf("%d+",x);
        }
        else
        {
            i=i-y;
            printf("%d+",x);
        }
        y=y++;
    }
    printf("=%d",sum);
    return 0;

}
