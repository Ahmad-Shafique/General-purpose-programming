#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,num;
    printf("enter a number to verify wheither its prime or not \n");
    scanf(" %d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("its not prime..");
            break;
        }
    }
    if(num==i)
    {
        printf("Its priime");
    }
    return 0;
}
