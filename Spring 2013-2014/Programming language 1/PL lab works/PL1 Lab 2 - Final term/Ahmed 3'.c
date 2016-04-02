#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="abcdabcdabcd",*ptr,input;
    ptr=s1;
    int count=0,i;
    scanf("%c",&input);
    printf("The required character has been found in\n");
    for(i=0;*ptr!='\0';ptr++,i++)
    {
        if(*ptr==input)
        {
            count+=1;
            printf("%d\t",i);
        }
    }
    printf("\nof the string");
    return 0;
}
