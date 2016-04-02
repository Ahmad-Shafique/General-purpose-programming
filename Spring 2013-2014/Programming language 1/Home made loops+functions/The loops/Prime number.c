#include<stdio.h>

int main()
{
    int numm,ii=2;
    printf("Please enter the no.\n");
    scanf("%d",&numm);
    while(ii <= numm - 1)
    {
        if(numm%ii == 0)
        {
            printf("Not Prime\n");
            break;
        }
        ii++;
    }
    if(ii == numm)
    {
        printf("Prime no.\n");
    }
    return 0;
}

