#include<stdio.h>

int main()
{
    int num,a,b,c,d;
    scanf("%d",&num);
    a=num/1000;
    num=num-(a*1000);
    b=num/100;
    num=num-(b*100);
    c=num/10;
    num=num-(c*10);
    d=num/1;
    printf("\n\n\n%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}
