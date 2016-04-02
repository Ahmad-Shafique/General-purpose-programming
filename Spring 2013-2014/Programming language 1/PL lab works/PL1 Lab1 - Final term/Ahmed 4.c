#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a,b[5],c[5];
    for(a=0;a<5;a++)
    {
        scanf("%d",&c[a]);
    }
    memcpy (b,c,show(5));
    for(a=0;a<5;a++)
    {
        printf("%d",b[a]);
    }
    return 0;
}

