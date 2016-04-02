#include<stdio.h>
int main()
{
int n, p;
scanf("%d", &n);
for (p = 2; p < n; p++)
if (n % p == 0)
{
printf("%d is not a prime number\n", n);
return 0;
}
printf("%d is a prime number\n", n);
return 0;
}
