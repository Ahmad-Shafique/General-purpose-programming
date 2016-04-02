#include <stdio.h>
#include <stdlib.h>

extern int array_construct(int s);
extern int array_sum(int c[]);
int main()
{
    int s=3,sum;
    int a=array_construct(s);
    sum=array_sum(int a[]);
    return 0;
}
