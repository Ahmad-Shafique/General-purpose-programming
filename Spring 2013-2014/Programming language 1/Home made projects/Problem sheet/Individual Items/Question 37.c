#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size=10000,loop,array[size],input;
    for(loop=0;loop<size;loop+=4)
    {
        array[loop]=loop;
    }
    scanf("%d",&input);
    for(loop=0;loop<size;loop++)
    {
        if(array[loop]==input)
        {
            printf("\nThe number exists in the database\n");
            return 0;
        }
    }
    printf("\nThe number does not exist in the database\n");
    return 0;
}
