#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *f;
    char ch;
    f=fopen("Exp2.txt","w");
    while(1)
    {
        scanf("%c",&ch);
        putc(ch,f);
        if(ch=='\n')
        {
            putc("\n",f);
            break;
        }
    }
    fclose(f);
    f=fopen("Exp2.txt","r");
    while(!feof(f))
    {
        getc(f);
    }
    fclose(f);
}
