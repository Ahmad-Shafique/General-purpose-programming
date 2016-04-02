#include<stdio.h>

int main()
{
    int i=2,n;
    scanf("%d",&n);
    for (i;i<=n-1;i++)
    {
        if (n%i==0)
        {
         printf("Not prime");
         break;
        }
    }
    if (i==n)
    {
        printf("Prime no.");
    }
    return 0;
}
