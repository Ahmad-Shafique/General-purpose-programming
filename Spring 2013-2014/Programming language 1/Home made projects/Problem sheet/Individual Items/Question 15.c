#include<stdio.h>

int main()
{
    int number,sum=0,loop=2;
    scanf("%d",&number);
    for(loop=2;loop<=number;loop+=2)
    {
        sum=sum+loop;
    }
    printf("\n%d\n",sum);
    return 0;
}

