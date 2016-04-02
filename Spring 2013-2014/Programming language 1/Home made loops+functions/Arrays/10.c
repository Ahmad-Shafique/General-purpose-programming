#include<stdio.h>

int main()
{
    int amount,a,b,c,x,d,e,f,g,h,i,sum;
    scanf("%d",&amount);
    a=amount/1000;
    x=amount%1000;
    b=x/500;
    x=x%500;
    c=x/100;
    x=x%100;
    d=x/50;
    x=x%50;
    e=x/20;
    x=x%20;
    f=x/10;
    x=x%10;
    g=x/5;
    x=x%5;
    h=x/2;
    x=x%2;
    i=x/1;
    sum=a+b+c+d+e+f+g+h+i;
    printf("%d 1000 taka notes\n",a);
    printf("%d 500 taka notes\n",b);
    printf("%d 100 taka notes\n",c);
    printf("%d 50 taka notes\n",d);
    printf("%d 20 taka notes\n",e);
    printf("%d 10 taka notes\n",f);
    printf("%d 5 taka notes\n",g);
    printf("%d 2 taka notes\n",h);
    printf("%d 1 taka notes\n",i);
    printf("\n\n\n\nMinimum no. of notes and coins = %d\n\n\n\n",sum);
    return 0;
}
