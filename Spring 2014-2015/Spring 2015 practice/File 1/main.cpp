#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *p1;
    char c;
    p1 = fopen("hello.txt","r");
    if(p1==NULL)
        printf("File not found\n");
    else
    {
        while(fgetc(p1)!=NULL)
        {
            c=fgetc(p1);
            printf("%c",c);
            if(c==EOF)
                break;
        }
        fclose(p1);
    }
    return 0;
}
