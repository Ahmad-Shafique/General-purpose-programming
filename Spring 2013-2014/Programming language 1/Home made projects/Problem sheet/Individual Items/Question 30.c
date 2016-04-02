#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[10],loop,sum=0,avg;
    for(loop=0;loop<10;loop++)
    {
        scanf("%d",&array[loop]);
        sum=sum+array[loop];
    }
    avg=sum/10;
    printf("\nAverage of all the elements in the array = %d\n\n\n",avg);
    return 0;
}
