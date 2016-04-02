#include<stdio.h>

int main()
{
    float number,sum=0,loop=2,divider;
    scanf("%f",&number);
    for(loop=1;loop<=number;loop++)
    {
        sum=sum+(1/loop);
    }
    printf("\n%f\n",sum);
    return 0;
}
