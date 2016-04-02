#include<stdio.h>
#include<stdlib.h>


int main()

{
    int Year;
    scanf("%d",&Year);
    if (Year%4==0)
    {
        printf("Leap Year\n");
        if (Year%100==0)
        {
            printf("Century Year\n");
            if (Year%400==0)
            {
                printf("Obviously Century Leap Year\n");
            }
            else
            {
                printf("Not Century Leap Year\n");
            }
        }
        else
        {
            printf("Not Century Year\n");
        }
    }
    else
    {
        printf("Not Leap Year\n");
    }
    return 0;
}
