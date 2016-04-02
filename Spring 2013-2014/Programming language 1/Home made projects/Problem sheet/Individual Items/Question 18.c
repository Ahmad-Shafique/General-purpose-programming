#include<stdio.h>
#include<math.h>

int main()
{
    int number,sum=4,loop,square;
    scanf("%d",&number);
    for(loop=3;loop<=number;loop+=2)
    {
        square=pow(loop,2);
        sum=sum+square;
    }
    printf("\n%d\n",sum);
    return 0;
}

