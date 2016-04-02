#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=20;i++)
    {
        printf("%d er ghorer namota\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",i,j,(i*j));
        }
    }
return 0;}

