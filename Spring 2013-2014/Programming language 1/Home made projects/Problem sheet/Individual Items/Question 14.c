#include<stdio.h>

int main()
{
    int number,sum=0,loop;
    scanf("%d",&number);
    for(loop=1;loop<=number;loop++)
    {
        sum=sum+loop;
    }
    printf("\n%d\n",sum);
    return 0;
}

