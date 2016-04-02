#include<stdio.h>
#include<math.h>

int main()
{
    int number,count=0;
    scanf("%d",&number);
    for(;number>1;)
    {
        if(number%2==0)
        {
            number/=2;
            count++;
        }
        else
        {
            number=(number*3)+1;
            count++;
        }
    }
    printf("\n%d\n",count);
    return 0;
}

