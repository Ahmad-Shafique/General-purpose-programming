#include<stdio.h>
#include<stdlib.h>

int main()
{
    int L1,L1a,L2,L2a,L3,L3a,L,La,matA[2][2],matB[2][2],matC[2][2];
    for(L1=0;L1<2;L1++)
    {
        for(L1a=0;L1a<2;L1a++)
        {
            printf("Enter the value of (%d,%d) of matrix A\n",L1,L1a);
            scanf("%d",&matA[L1][L1a]);
        }
    }
    for(L2=0;L2<2;L2++)
    {
        for(L2a=0;L2a<2;L2a++)
        {
            printf("Enter the value of (%d,%d) of matrix B\n",L2,L2a);
            scanf("%d",&matB[L2][L2a]);
        }
    }
    for(L3=0;L3<2;L3++)
    {
        for(L3a=0;L3a<2;L3a++)
        {
            matC[L3][L3a]=matA[L3][L3a]+matB[L3][L3a];
        }
    }
    printf("\nThe required matrix is : \n");
    for(L=0;L<2;L++)
    {
        for(La=0;La<2;La++)
        {
            printf("%d\t",matC[L][La]);
        }
        printf("\n");
    }
    return 0;
}
