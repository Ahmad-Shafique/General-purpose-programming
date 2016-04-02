#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,loop,revloop;
    scanf("%d",&size);
    int array[size],array_rev[size];
    for(loop=0;loop<size;loop++)
    {
        scanf("%d",&array[loop]);
    }
    for(revloop=0,loop-=1;revloop<size,loop>-1;revloop++,loop--)
    {
        array_rev[revloop]=array[loop];
    }
    for(loop=0;loop<size;loop++)
    {
        printf(" %d ",array_rev[loop]);
    }
    return 0;
}
