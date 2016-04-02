#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>

struct player
{
    char name[100];
    int MP;
    int EP;
    int PP;
    int IP;
    int time;
    int money;
}player;
int choice;
FILE *file1;
char ch;

int student();

int main()
{
    printf("Welcome to the game\n");
    printf("Enter the name of the player\n");
    scanf("%[^\n]",player.name);
    system("cls");
    printf("\n\n\nPlease choose a class\n1 = Student(+5 initial Education point)");
    printf("\n2 = Unskilled labour (+5 initial Physical point)");
    printf("\n3 = Aristocrat (initially, -5 Moral point, +2 Physical point, +1 Education point, +5 Influence point)");
    printf("\nAristocrat starts with 5000 coins. Others start with 200\n\n");
    system("cls");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            student();
            break;
        }
    case 2:
        {
            printf("Unskilled labour class");
            break;
        }
    case 3:
        {
            printf("Aristocrat class");
            break;
        }
    }
    return 0;
}


int student()
{
    int x;
    file1=fopen("Student-Begin.txt","r");
    system("cls");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    player.MP=0,player.EP=5,player.PP=0,player.IP=0,player.money=200;
    fclose(file1);
    while(x!=0)
    {
    file1=fopen("Student-6 months-activity selection.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
    printf("\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            player.money-=60,player.EP+=10,player.MP+=2,player.PP-=2;//Replace this with an activity
            break;
        }
    case 2:
        {
            file1=fopen("Student-Part time study.txt","r");
            do{
                ch=getc(file1);
                printf("%c",ch);
            }while(!feof(file1));
            fclose(file1);
            player.EP+=1,player.money+=10,player.PP+=2;
            break;
        }
    case 3:
        {
            player.EP-=1,player.money+=40,player.PP+=5; //Replace with activity
            break;
        }
    case 4:
        {
            file1=fopen("Student - Other - Activities.txt","r");
            do{
                ch=getc(file1);
                printf("%c",ch);
            }while(!feof(file1));
            fclose(file1);
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                {
                    player.MP+=2;
                    break;
                }
            case 2:
                {
                    player.MP-=4,player.money+=100;
                    break;
                }
            case 3:
                {
                    player.IP+=1,player.money+=10;
                    break;
                }
            }
            break;
        }
    }

    player.time++;
    }
}
