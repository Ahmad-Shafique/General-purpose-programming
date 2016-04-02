#include<stdio.h>

int main()
{
    int i=2,num;
    scanf("%d",&num);
    for(i;i<num;i++)
    {
        if(num%i==0)
        {
            printf("Not prime");
            break;
        }
    }
    if(i==num)
    {
        printf("Prime no.");
    }
}
