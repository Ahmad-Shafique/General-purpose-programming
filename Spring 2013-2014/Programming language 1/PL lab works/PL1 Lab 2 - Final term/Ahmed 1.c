#include<stdio.h>
#include<string.h>

int main()
{
    int i,index=-1;
    char b[30];
    char a[]="abcdef";
    char *ptr=a;
    while(*ptr!='\0')
    {
        index++;
        ptr++;
    }
    for(i=0;index>=0;i++,index--)
    {
        b[i]=a[index];
    }
    printf("%s",b);
    return 0;
}
