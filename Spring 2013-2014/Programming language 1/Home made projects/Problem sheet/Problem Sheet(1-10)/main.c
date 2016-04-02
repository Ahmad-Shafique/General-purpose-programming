#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>

extern void even_odd();
extern void prime();
extern void leap_year();
extern void ascii(); // INCOMPLETE! INCOMPLETE!! INCOMPLETE!!!
extern void factorial();
extern void perfect_number();
extern void armstrong(); // How to make square/cube ???
extern int sum_digit(int x);
extern int reverse();
extern int print();
extern int reverse(int x); //Copied from Nafis Kamal (FB - B8)
extern int distance_conversion(); //Doesn't work properly
extern int k_m(float x);
extern int m_k(float x);
/*extern int q_eleven();
extern int octal_conversion(int n);*/
int main()
{
    int choice,x,y;
    printf("\nEnter the question number\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        even_odd();
        getch();
        break;
    case 2:
        prime();
        getch();
        break;
    case 3:
        leap_year();
        getch();
        break;
    case 4:
        ascii();
        getch();
        break;
    case 5:
        factorial();
        getch();
        break;
    case 6:
        perfect_number();
        getch();
        break;
    case 7:
        armstrong();
        getch();
        break;
    case 8:
        printf("\nEnter the required number\n");
        scanf("%d",&x);
        y=sum_digit(x);
        printf("\nSum = %d\n",y);
        getch();
        break;
    case 9:
        x=print();
        y=reverse(x);
        printf("\nReverse = %d\n",y);
        getch();
        break;
    case 10:
        distance_conversion();
        getch();
        break;
    /*case 11:
        q_eleven();
        break;
    default:
        break;*/
    }
    return 0;
}
