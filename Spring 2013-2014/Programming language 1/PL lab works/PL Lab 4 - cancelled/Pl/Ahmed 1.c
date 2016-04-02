#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
char name[50];
int id;
int age;
}s[3];

void add();
int find(int id);
void del(int id);
void show(int z);

int main()
{
    int choice,b;
    strcpy(s[0].name,"Muhammad");
    strcpy(s[1].name,"Rahim");
    s[0].id=1;
    s[1].id=2;
    s[0].age=20;
    s[1].age=21;
    printf("\nEnter \n1 to add a students's data\n2 to search for a student in the database\n3 to delete a student's record's from the database\n4 to show a student's information\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        {
            add();
            break;
        }
        case 2:
        {
            printf("\nEnter the ID number\n");
            scanf("%d",&b);
            int m;
            m=find(b);
            show(m);
            break;
        }
        case 3:
        {
            printf("\nEnter the ID number\n");
            scanf("%d",&b);
            del(b);
            break;
        }
        case 4:
        {
            printf("\nEnter the ID number\n");
            int f,v;
            scanf("%d",&f);
            v=find(f);
            show(v);
            break;
        }
    }
    return 0;
}

void add()
{
    printf("\nEnter : \nName\nID\nAge\n");
    int m=2;
    scanf("%s%d%d",s[m].name,&s[m].id,&s[m].age);
    show(m);
}

void show(int z)
{
    printf("\nName : %s\tId : %d\tAge : %d\n",s[z].name,s[z].id,s[z].age);
}

int find(int id)
{
    int l,check=-1;
    for(l=0;l<3;l++)
    {
        if(id==s[l].id)
        {
            check=l;
        }
    }
    return check;
}

void del(int id)
{

    int i,b;
    b = find(id);
    for(i=b;i<3;i++)
    {
       s[i]=s[i+1];
    }
    for(i=0;i<3;i++)
    {
        show(i);
        printf("\n");
    }
}

