#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d,e,f;
    printf("please enter two number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("summation is %d\n",c);
    printf("substraction is %d\n",d);
    printf("multiplication is %d\n",e);
    printf("division is %d\n",f);

    return 0;
}
