#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5]={1,2,3,4,5},x,y,z,c=0;
    for(x=4;x>-1;x--,c++)
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
            printf("%d",a[y]);
        }
        printf("\n");
    }
    return 0;
}
