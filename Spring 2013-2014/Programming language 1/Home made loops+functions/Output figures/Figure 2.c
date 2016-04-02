#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k;
    for(j=6;j>-1;j--)
    {
        if(j<6)
        {
            for(k=j;k<6;k++)
            {
                printf(" ");
            }
        }
        for(i=0;i<=j;i++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

