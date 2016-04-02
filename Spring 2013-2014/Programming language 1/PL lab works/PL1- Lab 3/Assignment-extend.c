/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j,sum,sub,mul,div;
    int choice;
    scanf("%d",&choice);
    scanf("%d%d",&i,&j);
    switch(choice)
    {
    case 1:
        sum=i+j;
        printf("%d",sum);
        break;
    case 2:
        sub=i-j;
        printf("%d",sub);
        break;
    case 3:
        mul=i*j;
        printf("%d",mul);
        break;
    case 4:
        div=i/j;
        printf("%d",div);
        break;
    default:
        printf("invalid");
    }
    return 0;
}
