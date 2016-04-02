#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long int a,b,c,d,sum=0;
    printf("Enter the smaller number followed by the larger number\n\n");
    scanf("%ld%ld",&a,&b);
    c=a+1;
    for(c;c<b;c++)
    {
        for(d=2;d<c;d++)
        {
            if(c%d==0)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        if(d==c)
        {
            sum=sum+c;
            printf("%ld\t",sum);
        }
        else
        {
            continue;
        }
    }
    printf("\nThe sum of all prime no.s in the given range is = %ld",sum);
    return 0;
}

