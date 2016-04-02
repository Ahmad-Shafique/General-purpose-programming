#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int count);
int find();
void delete();
void show(int count);

struct student
    {
        char name[30];
        int id;
        int age;
    }s[3];

int main()
{

    int i,id;
    int count =3;
    printf("Enter 2 students information\n");
    for(i=0;i<2;i++)
    {
        printf("Name : ");
        scanf("%s",&s[i].name);
        printf("id : ");
        scanf("%d",&s[i].id);
        printf("Age : ");
        scanf("%d",&s[i].age);
    }
    add(count);
    find(id);
    return 0;
}
void add(int count)
{
    int i;
    for(i=count;i<=count;i++)
    {
        printf("Name:");
        scanf("%s",&s[i].name);
        printf("id:");
        scanf("%d",&s[i].id);
        printf("Age:");
        scanf("%d",&s[i].age);
    }
    count++;
    show(count);
}
void show(int count)
{
    int i;
    for(i=0;i<count;i++)
    {
        printf("Name: %s\n",s[i].name);
        printf("id: %d\n",s[i].id);
        printf("Age: %d\n",s[i].age);
    }
}

int find(int id)
{
   int i;
   printf("which id you want to find\n");
   scanf("%d",&i);
   for(i=0;i<3;i++)
    {
        if (id==s[i].id)
        {
            printf("found");
            return 1;
        }
       else
        {
            printf("not found");
            return 0;
        }
    }
}
