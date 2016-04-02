#include<stdio.h>

int main()
{
int n ,a, b, c;
scanf("%d", &n);
a = (n/100)%10;
b = (n/10)%10;
c =(n/1)%10;
printf("campus:%d\n", a);
printf("floor:%d\n", b);
printf("class no:%d\n", c);
return 0;
}
