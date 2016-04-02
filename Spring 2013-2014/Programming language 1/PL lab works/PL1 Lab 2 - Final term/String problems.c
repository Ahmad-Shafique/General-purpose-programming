#include<stdio.h>
#include<string.h>

void reverse();
void uppercase();
void search();
int main()
{
    int choice;
    printf("Please enter the required problem number\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        reverse();
        break;

        case 2:
        uppercase();
        break;

        default:
        search();
        break;
    }
    return 0;
}

void reverse()
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
}

void uppercase()
{
    char s1[]="abcdefg",*ptr;
    ptr=s1;
    for(;*ptr!='\0';ptr++)
    {
        *ptr=*ptr-32;
    }
    printf("%s",s1);
}

void search()
{
    char s1[]="abcdabcdabcd",*ptr,input;
    ptr=s1;
    int count=0,i;
    scanf("%c",&input);
    for(i=0;*ptr!='\0';ptr++,i++)
    {
        if(*ptr==input)
        {
            count+=1;
            printf("%d\t",i);
        }
    }
}
