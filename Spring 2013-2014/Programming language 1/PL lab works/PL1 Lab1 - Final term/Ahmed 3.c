#include<stdio.h>

int main()
{
    int a,b,c,e=0,f[3][3];
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            scanf("%d",&f[a][b]);
        }
    }
    printf("Enter the number you wish to search for\n");
    scanf("%d",&c);
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            if(c==f[a][b]);
            {
                printf("The number exists in database");
                e=1;
                return 0;
            }
            else
            {
                continue;
            }
        }
    }
    if(e==0)
    {
        printf("The no. does not exist in the database");
    }
    return 0;
}
