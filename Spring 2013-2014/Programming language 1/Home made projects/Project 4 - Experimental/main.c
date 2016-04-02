#include <stdio.h>
#include <stdlib.h>

extern int array_sum(int  c[]);
int main()
{
    int s,x;
    scanf("%d",&s);
    int a[s];
    for(x=0;x<s;x++)
    {
        scanf("%d",&a[x]);
    }
    int sum=array_sum(s,a);
    printf("\n%d\n",sum);
    return 0;
}
