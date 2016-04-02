#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct student{
char name[30];
int id;
int age;
}s[10];

void add();
int check();
void show(int i);
int find1();
int find2();
void showmediary(int sm);
void delmediary();
void del(int d);
void mod();

int main()
{
    int choice,p_end,choice2,namefound,idfound;
    strcpy(s[0].name,"Mahmud");
    s[0].id=1;
    s[0].age=20;
    strcpy(s[1].name,"Jamil");
    s[1].id=2;
    s[1].age=19;
    do
    {
        printf("\nPress\n1 to add a student's info to data base\n2 to find a student's info from database\n3 to delete a student's info\n4 to modify a student's info\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                add();
                break;
            }
            case 2:
            {
                printf("Press\n1 to search by name\n2 to search by ID number\n\n");
                scanf("%d",&choice2);
                switch(choice2)
                {
                    case 1:
                    {
                        namefound=find1();
                        showmediary(namefound);
                        break;
                    }
                    case 2:
                    {
                        idfound=find2();
                        showmediary(idfound);
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                delmediary();
                break;
            }
            case 4:
            {
                mod();
                break;
            }
        }
        printf("\nPress\n0 to end the program\nany other number to repeat the program\n\n");
        scanf("%d",&p_end);
    }while(p_end!=0);
    return 0;
}

void add()
{
    int em;
    em=check();
    printf("Please enter the student's\nName\nID number\nAge\n\n");
    scanf("%s%d%d",s[em].name,&s[em].id,&s[em].age);
    show(em);

}

int check()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(s[i].id==0)
        {
            return i;
        }
    }
    return 0;
}

void show(int i)
{
    printf("%s\t%d\t%d\n\n",s[i].name,s[i].id,s[i].age);
}

int find1()
{
    int i,j=-1;
    char name[30];
    printf("\nPlease enter the name of the student (Case-sensitive)\n\n");
    scanf("%s",name);
    for(i=0;i<10;i++)
    {
        if(strcmp(s[i].name,name)==0)
        {
            return i;
        }
    }
    return j;
}

int find2()
{
    int i,j=-1;
    int id;
    printf("\nPlease enter the ID number of the student\n\n");
    scanf("%d",&id);
    for(i=0;i<10;i++)
    {
        if(id==s[i].id)
        {
            return i;
        }
    }
    return j;
}

void showmediary(int sm)
{
    if(sm==-1)
    {
        printf("\nNo match found\n");
    }
    else
    {
        show(sm);
    }
}

void delmediary()
{
    int choice,namefound,idfound,i;
    printf("\n\n\nCurrent Database  :\n\n");
    printf("Name\tID\tAge\n\n");
    for(i=0;i<10;i++)
    {
        show(i);
    }
    printf("\nPress\n1 to delete by name\n2 to delete by ID number\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            namefound=find1();
            del(namefound);
            break;
        }
        case 2:
        {
            idfound=find2();
            del(idfound);
            break;
        }
    }
}

void del(int d)
{
    int i;
    for(i=d;i<10;i++)
    {
        s[i]=s[i+1];
    }
    for(i=0;i<10;i++)
    {
        show(i);
    }
}

void mod()
{
    int idfound,choice2,choice3;
    idfound=find2();
    printf("\nPress\n1 to modify the name\n0 to leave it as it is\n\n");
    scanf("%d",&choice2);
    switch(choice2)
    {
        case 1:
        {
            scanf("%s",s[idfound].name);
        }
        case 0:
        {
            break;
        }
    }
    printf("\nPress\n1 to modify the age\n0 to leave it as it is\n\n");
    scanf("%d",&choice3);
    switch(choice3)
    {
        case 1:
        {
            scanf("%d",&s[idfound].age);
        }
        case 0:
        {
            break;
        }
    }
}

