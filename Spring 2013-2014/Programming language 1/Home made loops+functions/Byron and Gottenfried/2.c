#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char x,y;
    scanf("%c",&x);
    printf("\n%c\n",getchar());
    printf("\n%c\n",toupper(x));
    putchar(x);
    return 0;
}
