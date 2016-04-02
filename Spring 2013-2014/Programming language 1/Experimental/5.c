#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z,c=0;
    for(x=7;x>-1;x--,c++)
    {
        if(x<7)
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
    return 0;
}
