/*Summation of upto 100 no.s*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int number,sum=0,n=1;
    while(n<100)
    {
        scanf(" d",&number);
        sum+=number;
        n++;
    }
    printf("The total sum is = %d",sum);
    return 0;
}
