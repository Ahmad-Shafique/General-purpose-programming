#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int size,loop,sum=0;
    scanf("%d",&size);
    int array[size];
    for(loop=0;loop<size;loop++)
    {
        scanf("%d",&array[loop]);
        sum=sum+pow(array[loop],2);
    }
    printf("\n%d\n",sum);
    return 0;
}
