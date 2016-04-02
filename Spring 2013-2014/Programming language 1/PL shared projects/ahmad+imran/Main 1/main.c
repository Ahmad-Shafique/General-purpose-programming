#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i=1,dsq,sum=0;
    for(i;i<11;)
    {
    dsq=2;
    printf("1/%d+",dsq);
    num=1/dsq;
    sum=sum+num;
    i=i*2;
    }
    printf("=%d",sum);
    return 0;
}
