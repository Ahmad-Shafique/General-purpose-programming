#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    for(x=0;x<4;x++)
    {
        for(y=0;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
