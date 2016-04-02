#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="abcdefg",*ptr;
    ptr=s1;
    for(;*ptr!='\0';ptr++)
    {
        *ptr=*ptr-32;
    }
    printf("%s",s1);
    return 0;
}
