#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10][10],x,y;
    for(x=1;x<4;x++)
    {
        for(y=1;y<7;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(x=4;x<7;x++)
    {
        for(y=x;;)
    }
}
