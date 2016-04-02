/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int arraysum(int z);

int main()
{
    int a;
    scanf("%d",&a);
    int y=array_sum(a);
    printf("Sum = %d",y);
    return 0;
}

int arraysum(int z)
{
    int e,c[z],sum=0;
    printf("Enter the array values");
    for(e=0;e<z;e++)
    {
        scanf("%d",&c[z]);
        sum=sum+c[z];
    }
    return sum;
}
