/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    printf("This programme is for finding out the smallest of the three numbers\n ");
    int a,b,c;
    printf("Please enter 3 values\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a<b)&&(a<c))
    {
        printf("First value is the smallest\n");
        printf("i.e, %d is the smallest\n",a);
    }
    else if ((b<a)&&(b<c))
    {
        printf("Second Value is the smallest\n");
        printf("i.e, %d is the smallest\n",b);
    }
   else if ((c<a)&&(c<b))
    {
        printf("Third Value is the smallest\n");
        printf("i.e, %d is the smallest\n",c);
    }
    else
    {
        printf("Something is wrong with the values you entered\n");
    }
    return 0;
}
