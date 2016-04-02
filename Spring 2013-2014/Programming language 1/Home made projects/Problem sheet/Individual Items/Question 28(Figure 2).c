#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    for(x=3;x>-1;x--)
    {
        for(y=0;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

