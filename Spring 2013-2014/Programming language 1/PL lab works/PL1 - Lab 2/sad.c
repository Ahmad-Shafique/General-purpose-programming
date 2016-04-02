#include<stdio.h>
#include <stdlib.h>

int main()
{
int num=0,x;
scanf("%d",&x);
while(x)
{
num=(num*10) + (x%10);
x/=10;
}
printf("%d",num);
return 0;
}
