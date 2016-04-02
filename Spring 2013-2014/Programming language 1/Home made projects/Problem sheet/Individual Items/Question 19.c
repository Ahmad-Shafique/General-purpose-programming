#include<stdio.h>
#include<math.h>

int main()
{
    float number,sum=0,loop,factorial=1;
    scanf("%f",&number);
    for(loop=1;loop<=number;loop++)
    {
        factorial=factorial*loop;
        sum=sum+(1/factorial);
    }
    printf("\n%f\n",sum);
    return 0;
}

