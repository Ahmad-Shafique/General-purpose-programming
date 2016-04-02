#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int l;
    struct employee{
    char name[50];
    int age;
    char sex[8];
    }e[2];
    printf("\nEnter name\nfollowed by age\nfollowed sex\n");
    for(l=0;l<2;l++)
    {
        scanf("%s%d%s",e[l].name,&e[l].age,e[l].sex);
    }
    for(l=0;l<2;l++)
    {
        printf("\n%s\t%d\t%s\n",e[l].name,e[l].age,e[l].sex);
    }
    return 0;
}
