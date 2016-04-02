#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=2,sum=0,start,end,num,prime ;
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
                        for(j=2;j<i;j++)
                        {
                            if(i%j==0)
                            {

                                break;
                            }
                        }
                        if((j==i)||(i==1))
                        {

                            sum=sum+i;
                        }
    }
    printf("the summation of prime numbers between %d and %d is %d",start,end,sum);


    return 0;
}
