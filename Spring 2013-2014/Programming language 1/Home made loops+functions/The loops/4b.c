#include<stdio.h>

int main()
{
    int num,i=2;
    scanf("d",&num);
    for(i;i<num;i+i)
    {
        if((num%1==0)&&(i!=num))
        {
            printf("Not prime");
        }
        else
        {
            printf("Prime");
        }
    }
    return 0;
}

