#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z,c=0;
    for(x=4;x>-1;x-=2,c++)
    {
        if(x<4)
        {
            for(z=1;z<=c;z++)
            {
                printf(" ");
            }
        }
        for(y=0;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
}
