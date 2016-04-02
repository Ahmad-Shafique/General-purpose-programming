#include<stdio.h>
#include<stdlib.h>

int array_minimum(s);
typedef int s , a[s] , m1 , m2 , x ;
#define m1,m2,x 0

int main()
{
    scanf("%d",&s);
    int min = array_minimum(s);
    printf("Minimum value = %d",min);
    return 0;
}

int array_minimum(s)
{
    for (x;x<s;x++)
    {
        scanf("%d",&a[s]);
        if(a[s]<a[s+1])
        {
            m1=a[s];
        }
    }
    return m1;
}
