#include<stdio.h>
#include<stdlib.h>

int main()
{
    int e;
    printf("Plase enter a value\n");
    scanf("%d",&e);
    if((e>=65)&&(e<=90))
    {
        printf("Upper Case letter\n");
    }
    else if((e>=97)&&(e<=122))
    {
        printf("Lower case letter\n");
    }
    else if((e>=48)&&(e<=57))
    {
        printf("Digit\n");
    }
    else if(((e>=0)&&(e<=47))||((e>=58)&&(e<=64))||((e>=91)&&(e<=96))||((e>=123)&&(e<=127)))
    {
        printf("Special Symbols");
    }
    else
    {
        printf("Out of range");
    }
    return 0;
}
