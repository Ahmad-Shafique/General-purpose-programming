#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void oddeven();
void smallest();
void vowelconsonant(); //Something wrong with this function
void leapyear();
void height(); //Something wrong with this function as well
void calculator();  //Wrong with this function also
void addition();
//all previous mistakes are : if statement doesn't work
int main()
{
    int choice,odev;
    printf("Welcome to the program-combine\n");
    printf("please enter\n1  for checking odd/even\n2  to check smallest of 3 numbers\n");
    printf("3  to check for vowels and consonants\n4  to check for leap year\n");
    printf("5  to check for height\n6  to switch to calculator mode\n7  to sum up a few numbers\n");
    printf("8  to exit the program\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
        oddeven();
        break;
    case 2 :
        smallest();
        break;
    case 3 :
        vowelconsonant();
        break;
    case 4 :
        leapyear();
        break;
    case 5 :
        height();
        break;
    case 6 :
        calculator();
        break;
    case 7 :
        addition();
        break;
    default :
        printf("Invalid");
    }

    return 0;
}

void oddeven()
{
        int odev;
        printf("Please enter the value\n");
        scanf("%d",&odev);
        if(odev%2==0)
        {
            printf("The no. is even\n");
        }
        else
        {
            printf("The no. is odd\n");
        }
}

void smallest()
{
    int a,b,c;
    printf("Please enter 3 values\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a<b)&&(b<c))
    {
        printf("First value is the smallest\n");
        printf("i.e, %d is the smallest\n",a);
    }
    else if ((a<c)&&(c<b))
    {
        printf("First value is the smallest\n");
        printf("i.e, %d is the smallest\n",a);
    }
    else if ((b<a)&&(a<c))
    {
        printf("Second Value is the smallest\n");
        printf("i.e, %d is the smallest\n",b);
    }
    else if ((b<c)&&(c<a))
    {
        printf("Second Value is the smallest\n");
        printf("i.e, %d is the smallest\n",b);
    }
   else if ((c<a)&&(a<b))
    {
        printf("Third Value is the smallest\n");
        printf("i.e, %d is the smallest\n",c);
    }
    else if ((c<b)&&(b<a))
    {
        printf("Third Value is the smallest\n");
        printf("i.e, %d is the smallest\n",c);
    }
    else
    {
        printf("Something is wrong with the values you entered\n");
    }
}

void vowelconsonant()
{
    char chr;
    printf("Please enter the required alphabet\n");
    scanf("% c",&chr);
    if ((chr==' a')||(chr==' e')||(chr==' i')||(chr=='o ')||(chr=='u ')||(chr==' A')||(chr=='E ')||(chr==' I')||(chr=='O ')||(chr==' U'))
    {
        printf("The alphabet is a vowel\n");
    }
    else
    {
        printf("The alphabet is a consonant\n");
    }
}

void leapyear()
{
    int year;
    printf("Please enter the year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Leap Year\n");
        if(year%100==0)
        {
            printf("Obviously century leap year\n");
        }
        else
        {
            printf("Not century leap year\n");
        }
    }
    else
    {
        printf("Not leap year\n");
    }
}

void height()
{
    float height;
    printf("Please enter the height\n");
    scanf("%f",&height);
    if(height>=5.6)
    {
        printf("Tall\n");
    }
    else if((height<5.5)&&(height>=5.2))
    {
        printf("Medium\n");
    }
    else if((height>0)&&(height<5.1))
    {
        printf("Short\n");
    }
    else
    {
        printf("Invalid\n");
    }
}

void calculator()
{
    printf("You have chosen the calculator\n");
    int i,j,sum,sub,mul,div;
    char choice;
    printf("Press\n+  for addition\n-  for substraction\n*  for multiplication and\n/  for division\n");
    scanf("%c",&choice);
    printf("Please enter 2 values\n");
    scanf("%d%d",&i,&j);
    if(choice=='+')
    {
        sum=i+j;
        printf("%d",sum);
    }
    else if(choice=='-')
    {
        sub=i-j;
        printf("%d",sub);
    }
    else if(choice=='*')
    {
        mul=i*j;
        printf("%d",mul);
    }
    else if(choice=='/')
    {
        div=i/j;
        printf("%d",div);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}

void addition()
{
    int value=0,sume=0;
    printf("Please keep entering the values. \nIf u wish to exit the addition mode, enter any value above 100\n");
    while(value<100)
    {
        scanf("%d",&value);
        sume=sume+value;
    }
    printf("The total sum is %d",sume);
}
