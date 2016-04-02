#include<stdio.h>

int main()
{
    int number,sum=0,loop=1;
    scanf("%d",&number);
    for(loop=1;loop<=number;loop+=2)
    {
        sum=sum+loop;
    }
    printf("\n%d\n",sum);
    return 0;
}


