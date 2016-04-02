#include <stdio.h>
#include <stdlib.h>

int array_min(int m1);
int array_max(int m2);
int array_search(int search);
int main()
{
    int s,min,max,search,choice;
    printf("Press 1 to find minimum\nPress 2 to find maximum\nPress 3 to search for a given number\n");
    scanf("%d",&choice);
    printf("Please enter the size of your array\n");
    scanf("%d",&s);
    switch(choice)
        {
        case 1:
            min=array_min(s);
            printf("Minimum value is = %d\n",min);
            break;
        case 2:
            max=array_max(s);
            printf("Maximum value is = %d\n",max);
            break;
        case 3:
            search=array_search(s);
            break;
        }
    return 0;
}

int array_max(int m2)

{
    int c[m2],x,max;
    printf("Please enter the array values\n");
    for(x=0;x<m2;x++)
    {
        scanf("%d",&c[x]);
    }
    max=c[0];
    for(x=1;x<m2;x++)
    {
        if(max<c[x])
        {
            max=c[x];
        }
    }
    return max;
}

int array_min(int m1)
{
    int c[m1],x,min;
    printf("Please enter the array values\n");
    for(x=0;x<m1;x++)
    {
        scanf("%d",&c[x]);
    }
    min=c[0];
    for(x=1;x<m1;x++)
    {
        if(min>c[x])
        {
            min=c[x];
        }
    }
    return min;
}

int array_search(int search)
{
    int x,c[search],d,z=0;
    printf("Please enter the values of your array\n");
    for(x=0;x<search;x++)
    {
        scanf("%d",&c[x]);
    }
    printf("Please enter the number you are looking for\n");
    scanf("%d",&d);
    for(x=x-1;x>-1;x--)
    {
        if(d==c[x])
        {
            printf("The number exists in the database");
            return 0;
        }
    }
        printf("The no. does not exist in the database" );
}
