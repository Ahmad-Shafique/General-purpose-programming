#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int loop,size;
    scanf("%d",&size);
    double array[size],sum=0,avg,sum2=0,avg2,standard_dev;
    for(loop=0;loop<size;loop++)
    {
        scanf("%lf",&array[loop]);
        sum=sum+array[loop];
    }
    avg=sum/size;
    for(loop=0;loop<size;loop++)
    {
        sum2=sum2+pow((array[loop]-avg),2);
    }
    avg2=sum2/size;
    standard_dev=sqrt(avg2);
    printf("\n%lf\n",standard_dev);
    return 0;
}
