#include<stdio.h>
#include<stdlib.h>

int main()
{
int x=9,y=6,z=x%y;
if(x>=y+z)
{
    x=++y+z;
    z=y+x++;
    y+=x;
}
else
    {
        printf("Invalid");
    }
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",z);
return 0;
}
