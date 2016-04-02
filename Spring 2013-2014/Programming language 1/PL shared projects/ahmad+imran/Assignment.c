/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j,sum,sub,mul,div;
    char choice;
    scanf("%c",&choice);
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
