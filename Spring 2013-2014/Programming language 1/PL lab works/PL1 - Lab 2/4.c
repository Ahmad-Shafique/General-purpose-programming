/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Temperature;
    scanf("%f",&Temperature);
    if(Temperature<=-1)
    {
        printf("Freezing Cold\n");
    }
    else if((Temperature>0)&&(Temperature<=16))
    {
        printf("cold\n");
    }
    else if((Temperature>=17)&&(Temperature<=25))
    {
        printf("Normal\n");
    }
    else if((Temperature>=26)&&(Temperature<=99))
    {
        printf("Hot\n");
    }
    else if(Temperature>=100)
    {
        printf("Boiling Hot\n");
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
