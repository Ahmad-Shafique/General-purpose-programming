#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct student
{
      char name[50];
      int id;
      int age;
}s[2];
 int count=2;

void add();
void show();
int find();
void delet();
void modify();
int main()
{
    printf ("name:");
    gets(s[0].name);
    printf("id:");
    scanf("%d",&s[0].id);
    printf("age:");
    scanf("%d",&s[0].age);
    printf ("name:");
    scanf("%s",&s[1].name);
    printf("id:");
    scanf("%d",&s[1].id);
    printf("age:");
    scanf("%d",&s[1].age);
    int choice;
    printf("enter 1 to add new student's information, 2 to search student, 3 to erase a specific student information, and 4 to modify student's information...");
   scanf("%d", &choice);
   switch(choice)
   {
   case 1:
    add();
    break;

   case 2:
    find();
    printf("found");
    break;

   case 3:
    delet();
    break;

   case 4:
       modify();
       break;


   }

    int ans = find();
    printf("found");
    delet();

    return 0;
}
 void add()
{ int i;
  for(i=count;i<=count;i++)
  {
    scanf("%s",&s[i].name);
    scanf("%d",&s[i].id);
    scanf("%d",&s[i].age);
  }count++;
   show();

}
int find()
{
  int id,m=-1,i;
  scanf ("%d",&id);
  for(i=0;i<=count;i++)
  { if(id==s[i].id)
    {
      m=i;
    }

  }
return m;

}
void show()
{ int i;
  for(i=0;i<count;i++)
  {
    puts(s[i].name);
    printf("\t%d\t",s[i].id);
    printf("%d\n",s[i].age);
  }
}

void delet()
{
    int i,j,id;
    printf("\nEnter id no. to delete\n");
    scanf("%d",&id);
    for(i=0;i<=2;i++)
    {
        if(id==s[i].id)
        {
            for(j=i;j<=2;j++)
            {
                s[i]=s[i+1];
            }
        }
    }
    show();
}
void modify()
{
    int i,n;
    printf("Enter the student id number that you want to edit...: \n");
    scanf("%d", &n);
    for(i=0; i<=count; i++)
    {
        if(n==s[i].id)
        {
            printf("\n name: ");
            scanf("%s", &s[i].name);
            printf("\n id:");
            scanf("%d", &s[i].id);
            printf("age:");
            scanf("%d", &s[i].age);

        }
        show();
    }

}
