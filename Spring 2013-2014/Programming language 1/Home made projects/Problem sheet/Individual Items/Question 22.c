#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,prime=0,square,signal,loop,sum=0;
    scanf("%d",&num);
    for(loop=0;loop<=num;prime++,loop++)
    {
        i=2;
        while(i<= prime-1)
        {
            if(prime%i==0)
            {
                signal=0;
                break;
            }
            i++;
        }
        if(i==prime)
        {
            signal=1;
        }
        if(signal==1)
        {
            square=prime*prime;
            printf("%d+",square);
            sum=sum+square;
        }
    }
    printf("=%d\n",sum);
    return 0;
}
