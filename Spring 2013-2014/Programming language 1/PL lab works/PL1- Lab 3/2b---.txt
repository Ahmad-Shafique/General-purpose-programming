
#include<stdio.h>
#include<stdlib.h>


int main()
{
int num, div=2;
scanf("%d", &num);
for (div;div< num;div+=1)
if (num%div==0)
{
    printf("%d is not a prime number\n", num);
    return 0;
}
else
{
    printf("%d is a prime number\n", num);
    return 0;
}
}
