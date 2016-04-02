/*Made By Ahmed*/

#include<stdio.h>

int main()
{
    int num,diff,pos,sum,k=0;
    for(num=2,pos=1,diff=1,sum=0;pos<9;pos++)
    {
        if(pos%2==0)
        {
            sum=sum+diff+num;
            k=num+diff;
            printf("%d+",k);
            diff++;
        }
        else
        {
            printf("%d+",num);
            sum=sum+num;
        }
    }
    printf("=%d",sum);
    return 0;
}
