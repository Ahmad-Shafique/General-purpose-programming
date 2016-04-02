#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int num=1,rais,res;

    for(;num<21;num++)
    {
    for(rais=1;rais<11;rais++)
    {
        res=num*rais;
        printf("%d X %d = %d\n",num,rais,res);
    }
    printf("\n\n\n");
    }
return 0;
}
