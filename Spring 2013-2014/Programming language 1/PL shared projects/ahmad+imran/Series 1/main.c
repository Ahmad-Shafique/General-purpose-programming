#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=2,pos,sum=2,loop,k=3;
    for(loop=1,pos=1;loop<9;loop++,pos++)
    {
        if(pos%2==0)
        {
            sum=sum+k;
            k++;
        }
        else
        {
            sum=sum+num;
        }
    }
    printf("%d",sum);
    return 0;
}
