#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main()
{
    int i;
    char *ch, c;
    strcpy(ch,"Hello sir, How are you?jjjjjj");
    for(i=0;i<500;i++){
        getch();
        printf("%c",&ch[i]);
    }
    return 0;
}
