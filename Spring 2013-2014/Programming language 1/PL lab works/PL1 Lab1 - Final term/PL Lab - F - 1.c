/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int array_sum(int z);

int main()
{
    int a;
    scanf("%d",&a);
    int y = array_sum(a);
    printf("Sum = %d",y);
    /*for(a=0;a<5;a++)
    {
        scanf("%d",&c[a]);
        sum=sum+c[a];
    }*/
    /*for(a=0;a<5;a++)
    {
        printf("%d\t%u\n",c[a],&c[a]);
    }
    sum=sum/5;
    printf("\nAverage = %d\n",sum);
    */
    return 0;
}

int array_sum(int z)
{
    int e,c[z],sum=0;
    for(e=0;e<z;e++)
    {
        printf("Enter the array values");
        scanf("%d",&c[z]);
        sum=sum+c[z];
        return sum;
    }
}
