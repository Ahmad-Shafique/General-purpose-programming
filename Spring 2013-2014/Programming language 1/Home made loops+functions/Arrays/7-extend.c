#include<stdio.h>

int main()
{
    int a,b,d,x=0;
    int c[3][3];
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            scanf("%d",&c[a][b]);
        }
    }
    printf("Please enter he no. you want to look for\n");
    scanf("%d",&d);
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            if(d==c[a][b])
            {
                printf("Number exists in the database\n");
                x=1;
            }
        }
    }
    if(x==0)
    {
        printf("The number does not exist in the database\n");
    }
    return 0;
}
