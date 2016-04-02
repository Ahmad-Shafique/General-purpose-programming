#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("please enter a number to check prime or not\a\a");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("not prime\a");
        }
        if((n%i!=0)||(n==2))
        {
            printf("prime\n");
            break;
        }
    }
    return 0;
}
