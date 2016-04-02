/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
int arraysum(int z);

int main()
{
    int a;
    printf("Enter the size of array\n");
    scanf("%d",&a);
    int y = arraysum(a);
    printf("\nSum = %d",y);
    return 0;
}

int arraysum(int z)
{
    int e,c[z],sum=0;
    printf("Enter the array values\n");
    for(e=0;e<z;e++)
    {
        scanf("%d",&c[z]);
        sum=sum+c[z];
    }
    return sum;
}
