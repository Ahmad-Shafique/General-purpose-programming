#include<stdio.h>
#include<stdlib.h>

int main() //Show 98 before the actual answer
{
    int number,result=0,result2=0;
    scanf("%d",&number);
    while(number>8)
    {
        result=(result*10)+(number%8);
        number/=8;
    }
    result=(result*10)+number;
    while(result>0)
    {
        result2=(result2*10)+(result%10);
        result/=10;
    }
    printf("\n%d\n",result2);
    return 0;
}
