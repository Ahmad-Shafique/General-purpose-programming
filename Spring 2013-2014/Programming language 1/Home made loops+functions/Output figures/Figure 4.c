#include<stdio.h>
#include<stdLib.h>

int main()
{
    int i,j,k,L,m;
    printf("Enter the amount of line you would like to see in the pyramid\n");
    scanf("%d",&m);
    for(i=m,k=0;i>-1;i-=2,k++)
    {
        if(i<m)
        {
            for(L=1;L<=k;L++)
            {
                printf(" ");
            }
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
