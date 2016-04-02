#include<stdio.h>

int main()
{
    int input,mul,result;
    printf("Please enter a number\n");
    scanf("%d",&input);
    for(mul=1;mul<101;mul++)
    {
        result=input*mul;
        printf("%d  X  %d  =  %d\n",input,mul,result);
    }
    return 0;
}
