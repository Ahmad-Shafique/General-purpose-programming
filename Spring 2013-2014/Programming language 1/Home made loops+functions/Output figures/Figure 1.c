#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,arry[5]={1,2,3,4,5};
    for(j=4;j>-1;j--)
    {
        if(j<4)
        {
            for(k=j;k<4;k++)
            {
                printf(" ");
            }
        }
        for(i=0;i<=j;i++)
        {
            printf("%d",arry[i]);
        }

        printf("\n");
    }
    return 0;
}
