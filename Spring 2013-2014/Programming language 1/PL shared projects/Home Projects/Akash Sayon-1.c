#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,sum,sub,div,mul;
  int choice;
  scanf("%d",&choice); //scanf("%c",&choice);
  scanf("%d %d",&i,&j);
  switch (choice) //switch ("choice");
  {
     case 1:
        sum=i+j;
        printf("%d",sum); //printf("sum");
        break; //New
     case 2:
        sub=i-j;
        printf("%d",sub); //printf("sub");
        break; //New
     case 3:
        mul=i*j;
        printf("%d",mul); //printf("mul");
        break; //New
     case 4:
        div=i/j;
        printf("%d",div); //printf("div");
        break; //New
     default:
     printf("Invalid");

  }
   // printf("Hello world!\n");
    return 0;
}
