#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,loop,sum=0;
    scanf("%d",&size);
    int array[size];
    for(loop=0;loop<size;loop++)
    {
        scanf("%d",&array[loop]);
        if(loop%2==0&&loop>1)
        {
            sum=sum+array[loop];
        }
    }
    printf("\n%d\n",sum);
    return 0;
}
