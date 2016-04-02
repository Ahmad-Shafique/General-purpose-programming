#include<stdio.h>
#include<stdlib.h>

int main()
{
    int max1=0,max2=0,array[5],loop,loop1;
    for(loop=0;loop<5;loop++)
    {
        scanf("%d",&array[loop]);
    }
    for(loop=0;loop<5;loop++)
    {
        if(max1<array[loop])
        {
            max1=array[loop];
        }
    }
    for(loop1=0;loop1<5;loop1++)
    {
        if((max2<array[loop])&&max2!=max1)
        {
            max2=array[loop];
        }
    }
    printf("\nFirst maximum = %d\nSecond maximum=%d",max1,max2);
    return 0;
}
