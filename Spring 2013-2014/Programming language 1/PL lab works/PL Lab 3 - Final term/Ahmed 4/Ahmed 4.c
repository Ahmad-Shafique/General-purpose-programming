#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int l;
    struct student{
    char name[30];
    char age[5];
    char address[50];
    char telephone[40];
    }s[2];
    printf("\nEnter name\nage\naddress\ntelephone\n");
    for(l=0;l<2;l++)
    {
        scanf("%s%s%s%s",s[l].name,s[l].age,s[l].address,s[l].telephone);
        if(l!=1)
        {
            printf("\nEnter the next student's details\n");
        }
    }
    for(l=0;l<2;l++)
    {
        printf("\n\n\n\n\n\n\n\n%s\n%s\n%s\n%s\n\n\n",s[l].name,s[l].age,s[l].address,s[l].telephone);
    }
    return 0;
}
