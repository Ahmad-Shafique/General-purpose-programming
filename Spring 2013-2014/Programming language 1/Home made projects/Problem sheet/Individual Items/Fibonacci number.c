#include<stdio.h>

int main()
{
    int a=0,b=1,number,loop,temp,sum=0;
    scanf("%d",&number);
    for(loop=0;loop<number;loop++)
    {
        temp=b;
        b=a+b;
        printf("%d+",b);
        sum=sum+b;
        a=temp;
    }
    printf("=%d",sum);
    return 0;
}
