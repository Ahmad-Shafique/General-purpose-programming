#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int x,y;
    char c[4]={"a","b","c","d"};
    for(x=0;x<4;x++)
    {
        for(y=0;y<=x;y++)
        {
            printf("%s",c[y]);
        }
        printf("\n");
    }
    return 0;
}
