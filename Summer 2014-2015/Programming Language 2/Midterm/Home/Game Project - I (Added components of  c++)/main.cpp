#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <float.h>
#include <time.h>

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
int x;
FILE *file1;
char ch;

int game_beginning();
int student();
void Game_Over(){getch(); system("cls"); printf("\n\n\n\n\n\t\t\t\t\tGAME OVER\n");}//{cout<<setw(50)<<"GAME OVER"; return 0;}
void out_of_money();
void out_of_money_text_student();
void show_stats();
void clearscreen(){getch(); system("cls");}
void career_check_student();
void career_unlock_student();
int yes_no_choice();
void choose_doctor(int choice);
void choose_Engineer(int choice);
void choose_Writer(int choice);
void choose_Philosopher(int choice);
void choose_Criminal(int choice);
void choose_Soldier(int choice);
int Unskilled_Labour();
void out_of_money_text_labour();
void out_of_money_text_Doctor();
void career_check_labour();
void choose_builder(int choice);
void choose_Blacksmith(int choice);
void choose_Shopkeeper(int choice);
void Hunt();
int Doctor();
void Surgeon();
void retal_on_doctor();
void career_check_Doctor();
void choose_royal_phisician(int choice);
int Engineer();
void out_of_money_text_Engineer();
void Research();
void career_check_Engineer();
int Writer();
void out_of_money_text_Writer();
void career_check_Writer();
void choose_Royal_Scribe(int choice);
void Writing_on_Politics();
void Publish_Work();
void Research_Literature();
void Execution_By_Orders_of_The_King();

int main()
{
    game_beginning();
    return 0;
}

int game_beginning()
{
    printf("Welcome to the game\n");
    printf("Enter the name of the player\n");
    scanf("%[^\n]",player.name);
    system("cls");
    printf("\n\n\nPlease choose a class\n1 = Student(+5 initial Education point)");
    printf("\n2 = Unskilled labour (+5 initial Physical point)");
    printf("\n3 = Aristocrat (initially, -5 Moral point, +2 Physical point, +1 Education point, +5 Influence point)");
    printf("\nAristocrat starts with 5000 coins. Others start with 200\n\n");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
    case 1:
        {
            student();
            break;
        }
    case 2:
        {
            Unskilled_Labour();
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
    file1=fopen("Student-Begin.txt","r");
    system("cls");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    player.MP=0,player.EP=5,player.PP=0,player.IP=0,player.money=200;
    fclose(file1);
    x=1;
    while(x!=0)
    {
        if(player.time==120)
        {
            file1=fopen("Student Death - Natural.txt","r");
            while(!feof(file1))
                {
                    ch=getc(file1);
                    printf("%c",ch);
                }
            fclose(file1);
            Game_Over();
            return 0;
        }
        if(player.money<=0)
        {
            out_of_money_text_student();
            out_of_money();
            clearscreen();
        }
        career_check_student();
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
                system("cls");
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
        system("cls");
        show_stats();
    player.time++;
    }
    return 0;
}

int Unskilled_Labour()
{
    file1=fopen("Unskilled-Labour-Begin.txt","r");
    system("cls");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    player.MP=0,player.EP=0,player.PP=5,player.IP=0,player.money=200;
    fclose(file1);
    while(x!=0)
    {
        if(player.time==120)
        {
            file1=fopen("Labour Death - Natural.txt","r");
            while(!feof(file1))
                {
                    ch=getc(file1);
                    printf("%c",ch);
                }
            fclose(file1);
            Game_Over();
            return 0;
        }
        if(player.money<=0)
        {
            out_of_money_text_labour();
            out_of_money();
            clearscreen();
        }
        career_check_labour();
        file1=fopen("Labour-6 months-activity selection.txt","r");
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
                player.money+=300,player.IP-=4,player.PP+=5;//Replace this with an activity
                break;
            }
            case 2:
            {
                player.MP-=3,player.money+=500,player.PP+=8; //Replace with activity
                break;
            }
            case 3:
            {
                Hunt(); //Replace with activity
                break;
            }

        }
        system("cls");
        show_stats();
    player.time++;
    }
    return 0;
}

int Doctor()
{
    for(;;)
    {
        if(player.time==120)
        {
            file1=fopen("Doctor Death - Natural.txt","r");
            while(!feof(file1))
                {
                    ch=getc(file1);
                    printf("%c",ch);
                }
            fclose(file1);
            Game_Over();
            return 0;
        }
        if(player.money<=0)
        {
            out_of_money_text_Doctor();
            out_of_money();
            clearscreen();
        }
        career_check_Doctor();
        file1=fopen("Doctor-6 months-activity selection.txt","r");
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
                player.money+=2000,player.IP+=7,player.MP+=20,player.PP-=2;//Replace this with an activity
                break;
            }
            case 2:
            {
                Surgeon();
                break;
            }
        }
        system("cls");
        show_stats();
    player.time++;
    }
    return 0;
}

int Engineer()
{
    for(;;)
    {
        if(player.time==120)
        {
            file1=fopen("Engineer Death - Natural.txt","r");
            while(!feof(file1))
                {
                    ch=getc(file1);
                    printf("%c",ch);
                }
            fclose(file1);
            Game_Over();
            return 0;
        }
        if(player.money<=0)
        {
            out_of_money_text_Engineer();
            out_of_money();
            clearscreen();
        }
        career_check_Engineer();
        file1=fopen("Engineer-6 months-activity selection.txt","r");
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
                player.money+=6000,player.IP+=10,player.PP+=5,player.MP-=2;//Replace this with an activity
                break;
            }
            case 2:
            {
                Research();
                break;
            }
        }
        system("cls");
        show_stats();
    player.time++;
    }
    return 0;
}

int Writer()
{
    for(;;)
    {
        if(player.time==120)
        {
            file1=fopen("Writer Death - Natural.txt","r");
            while(!feof(file1))
                {
                    ch=getc(file1);
                    printf("%c",ch);
                }
            fclose(file1);
            Game_Over();
            return 0;
        }
        if(player.money<=0)
        {
            out_of_money_text_Writer();
            out_of_money();
            clearscreen();
        }
        career_check_Writer();
        file1=fopen("Writer-6 months-activity selection.txt","r");
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
                Writing_on_Politics();//Replace this with an activity
                break;
            }
            case 2:
            {
                player.IP+=50,player.money+=300,player.MP+=10;
                break;
            }
            case 3:
            {
                player.IP+=10,player.money+=8000;
                break;
            }
            case 4:
            {
                Publish_Work();
                break;
            }
            case 5:
            {
                Research_Literature();
                break;
            }
        }
        system("cls");
        show_stats();
    player.time++;
    }
    return 0;
}

void out_of_money()
{
    player.time++;
    player.money+=5;
    if(player.money<=0)
        out_of_money();
}

void out_of_money_text_student()
{
    file1=fopen("out-of-money-student-text.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
}

void out_of_money_text_labour()
{
    file1=fopen("out-of-money-text-labour.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
}

void out_of_money_text_Doctor()
{
    file1=fopen("out-of-money-text-Doctor.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
}

void out_of_money_text_Engineer()
{
    file1=fopen("out-of-money-text-Engineer.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
}

void out_of_money_text_Writer()
{
    file1=fopen("out-of-money-text-Writer.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
}

void show_stats()
{
    system("cls");
    printf("Age = %d Years %d months\n",(player.time/2),player.time);
    printf("Money = %d\n",player.money);
    printf("Education Point = %d\n",player.EP);
    printf("Moral Point = %d\n",player.MP);
    printf("Influence Point = %d\n",player.IP);
    printf("Physical Point = %d\n",player.PP);
}

void career_check_student()
{
    if(player.EP>=60&&player.MP>=30&&player.IP>=10)
        career_unlock_student();
    else if(player.EP>=55&&player.PP>=10&&player.IP>=15)
        career_unlock_student();
    else if(player.EP>=70)
        career_unlock_student();
    else if(player.EP==5&&player.PP==5&&player.IP==5&&player.MP==5&&player.money==5)
        career_unlock_student();
    else if(player.MP<=-20)
        career_unlock_student();
    else if(player.PP>=30)
        career_unlock_student();
    //else
        //break;
}

void career_unlock_student()
{
    if(player.EP>=60&&player.MP>=30&&player.IP>=10)
    {
        printf("You are eligible to become a doctor\nWould you like to do so?\n");
        choose_doctor(yes_no_choice());
    }
    else if(player.EP>=55&&player.PP>=10&&player.IP>=15)
    {
        printf("You are eligible to become a Engineer\nWould you like to do so?\n");
        choose_Engineer(yes_no_choice());
    }
    else if(player.EP>=70)
    {
        printf("You researched enough to become a Writer\nWould you like to do so?\n");
        choose_Writer(yes_no_choice());
    }
    else if(player.EP==5&&player.PP==5&&player.IP==5&&player.MP==5&&player.money==5)
    {
        printf("Congratulations !! \nYou did the impossible of qualifying as philosopher\nWould you like to become one?\n");
        choose_Philosopher(yes_no_choice());
    }
    else if(player.MP<=-20)
    {
        printf("Your soul is rotting like that of a criminal\nWould you like to become one?\n");
        choose_Criminal(yes_no_choice());
    }
    else if(player.PP>=30)
    {
        printf("You are strong enough to be a soldier\nWould you like to become one?\n");
        choose_Soldier(yes_no_choice());
    }
    //else
        //break;
}

void career_check_labour()
{
    if(player.PP>=7&&player.money>=500)
    {
        printf("You may become a builder\n");
        choose_builder(yes_no_choice());
    }
    else if(player.money>=3000&&player.PP>=12)
    {
        printf("You have all that is needed to become a blacksmith.\nWould you like to open your own armory?\n");
        choose_Blacksmith(yes_no_choice());
    }
    else if(player.money>=5000)
    {
        printf("You have enough money to start your own business?\nDo you want to open a shop?\n");
        choose_Shopkeeper(yes_no_choice());
    }
    else if(player.MP<=-20)
    {
        printf("Your soul is rotting like that of a criminal\nWould you like to become one?\n");
        choose_Criminal(yes_no_choice());
    }
    else if(player.PP>=30)
    {
        printf("You are strong enough to be a soldier\nWould you like to become one?\n");
        choose_Soldier(yes_no_choice());
    }
}

void career_check_Writer()
{
    if(player.MP<=50)
    {
        printf("You became a lunatic");
        printf("Lunatic function");
    }
    else if(player.money>=1000&&player.IP>=3000&&player.EP>=2000)
    {
        printf("You have been invited to join the royal court and write for the king. Do you agree?\n");
        choose_Royal_Scribe(yes_no_choice());
    }
    else if(player.money>=5000)
    {
        printf("Famed_Writer function");
    }
    else if(player.MP<=-20)
    {
        printf("Your soul is rotting like that of a criminal\nWould you like to become one?\n");
        choose_Criminal(yes_no_choice());
    }
    else if(player.PP>=30)
    {
        printf("You are strong enough to be a soldier\nWould you like to become one?\n");
        choose_Soldier(yes_no_choice());
    }
}

void career_check_Doctor()
{
    if(player.IP>=1000&&player.money>=25000)
    {
        printf("You have been invited to become the royal doctor. Do you accept ?\n");
        choose_royal_phisician(yes_no_choice());
    }
    else if(player.MP<=-150)
    {
        printf("Your soul is rotting like that of a criminal\nWould you like to become one?\n");
        choose_Criminal(yes_no_choice());
    }
    else if(player.PP>=30)
    {
        printf("You are strong enough to be a soldier\nWould you like to become one?\n");
        choose_Soldier(yes_no_choice());
    }
}

void career_check_Engineer()
{
    if(player.MP<=-150)
    {
        printf("Your soul is rotting like that of a criminal\nWould you like to become one?\n");
        choose_Criminal(yes_no_choice());
    }
    else if(player.PP>=30)
    {
        printf("You are strong enough to be a soldier\nWould you like to become one?\n");
        choose_Soldier(yes_no_choice());
    }
}

int yes_no_choice()
{
    printf("\npress\n1 for yes\n2 for no");
    scanf("%d",&choice);
    return choice;
}

void choose_doctor(int choice)
{
    system("cls");
    if(choice==1)
        Doctor();
}

void choose_Engineer(int choice)
{
    system("cls");
    if(choice==1)
        Engineer();
}

void choose_Writer(int choice)
{
    system("cls");
    if(choice==1)
        printf("Writer Function");
}

void choose_Philosopher(int choice)
{
    system("cls");
    if(choice==1)
        printf("Philosopher Function");
}

void choose_Criminal(int choice)
{
    system("cls");
    if(choice==1)
        printf("Criminal Function");
}

void choose_Soldier(int choice)
{
    system("cls");
    if(choice==1)
        printf("Soldier Function");
}

void choose_builder(int choice)
{
    system("cls");
    if(choice==1)
        printf("Builder Function");
}

void choose_Blacksmith(int choice)
{
    system("cls");
    if(choice==1)
        printf("Blacksmith Function");
}

void choose_Shopkeeper(int choice)
{
    system("cls");
    if(choice==1)
        printf("Shopkeeper Function");
}

void choose_royal_phisician(int choice)
{
    if(x==1)
    {
        printf("Royal physician function");
    }
}

void choose_Royal_Scribe(int choice)
{
    system("cls");
    if(choice==1)
        printf("Royal scribe function");
}

void Hunt()
{
    srand(time(NULL));
    x=rand()%3;
    if(x==2)
    {
        x=rand()%100;
        if(x==50)
        {
            printf("Great god be praised. \nYou hunted and killed nightstalker, the lion who terrorized the country for months. ");
            printf("\nYou have become the national hero.\nThe king himself appointed you as a commander of the army\n");
            printf("\nCONGRATULATIONS !!!\n");
            player.money+=50000,player.IP+=4000;
            printf("Commander Function");
        }
        else
        {
            printf("You scored on a rare animal and became a local hero\nWell done !");
            player.money+=10000,player.IP+=300;
        }
    }
    else
        player.money+=50,player.IP+=2;
}

void Surgeon()
{
    srand(time(NULL));
    x=rand()%100;
    if(x<=28)
    {
        player.MP+=80,player.money+=15000,player.IP+=7;
    }
    else if(x>=65)
    {
        x=rand()%101;
        if(x<=10)
           retal_on_doctor();
        else
            player.MP-=95,player.money+=3000,player.IP-=100;
    }
}

void Research()
{
    srand(time(NULL));
    x=rand()%100;
    if(x<=3)
    {
        player.money+=30000,player.IP+=10000;
        printf("Inventor function");
    }
    else if(x>=65)
    {
        player.money-=1000;
    }
}

void Writing_on_Politics()
{
    srand(time(NULL));
    x=rand()%100;
    if(x>=23&&x<=28)
    {
        x=rand()%101;
        if(x==26||x==37||x==89)
            Execution_By_Orders_of_The_King();
        else
            player.IP-=10000;
    }
    else
    {
        player.money+=1500,player.IP+=300,player.MP-=5;
    }
}

void Research_Literature()
{
    srand(time(NULL));
    x=rand()%100;
    if(x==50)
    {
        printf("You have been able to bring revolutionary changes to the way language is used\n");
        printf("\nCONGRATULATIONS !!!\n");
        printf("Famed writer function");
    }
    else
    {
        player.money-=3000;
    }
}

void Publish_Work()
{
    srand(time(NULL));
    x=rand()%100;
    if(x>=25&&x<=65)
    {
        player.IP+=2500,player.money+=25000;
    }
    else
    {
        player.money+=1500,player.IP+=300,player.MP-=5;
    }
}

void retal_on_doctor()
{
    file1=fopen("retal_on_doctor.txt","r");
    while(!feof(file1))
    {
        ch=getc(file1);
        printf("%c",ch);
    }
    fclose(file1);
    Game_Over();
}

void Execution_By_Orders_of_The_King()
{
    printf("You were executed on the orders of the king\n");
    printf("You Die, but you become a martyr to the king's tyranny in the eyes of he people\n");
    Game_Over();
}

