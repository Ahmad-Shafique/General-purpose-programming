#include <stdio.h>
#include <stdlib.h>

extern int array_min(int m1);
extern int array_max(int m2);
extern int array_search(int search);
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
