#include<stdio.h>
int main()
{
char pasword[6], x, d, pass;
int i;
printf("Enter password (6 characters): ");

for(i=0;i<6;i++)
{
pass = getch();
pasword[i] = pass;
pass = '*' ;
printf("%c", pass);
}
printf("\n\npress Enter now");
scanf("%c", &d);
printf("\n\ndo you wanna know what the hell u've just typed?: \n\n\nif yes type y if no then type n:..");
scanf("%c", &x);
switch(x)
{
case'y':
pasword[i] = '\0';
printf("\nYour password is :");
for(i=0;i<8;i++)
printf("%c", pasword[i]);
printf("\n\n");
break;
case'n': printf("\ntake aqib then");
break;
default: printf("\n\nyou have entered wrong\n");
}6
return 0;
}
