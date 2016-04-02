#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int count);
int find(int count);
void delet(int count);
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
    find(count);
    delet(count);
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

int find(int count)
{
    int i, n, p = 0;
    printf("\n\nsearch id:...");
    scanf("%d", &n);
    for(i=0; i<=count; i++){
        if(n==s[i].id)
        {
            printf("\nfound");
            p = 1;
            break;
        }

}
if(p==0){
printf("\nnot found");
}
}
void delet(int count)
{
    int i, n, p, colum;
    printf("\ndelete a specific student information\nEnter the id of that student:...");
    scanf("%d", &n);
        for(i=0; i<count; i++){
        if(n==s[i].id)
        {
            p = 1;
            colum = i;
            break;
        }

        }
        if(p==1){
        for(i=colum; i<=count; i++)
                {
                s[i]=s[i+1];
            }
            }
            printf("\nall the info has already been deleted\n");
            show(count);
}
