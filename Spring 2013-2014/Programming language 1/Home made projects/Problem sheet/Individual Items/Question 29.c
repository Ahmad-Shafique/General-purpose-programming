#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[10],loop,sum=0;
    for(loop=0;loop<10;loop++)
    {
        scanf("%d",&array[loop]);
        sum=sum+array[loop];
    }
    printf("\nSum of all the elements in the array = %d\n\n\n",sum);
    return 0;
}
