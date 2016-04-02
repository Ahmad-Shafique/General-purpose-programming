#include <stdio.h>
#include <stdlib.h>

extern int array(int size);
int main()
{
    int size,a;
    scanf("%d",&size);
    for(a=0;a<size;a++)
    {
        int array[a]=array(size);
    }
    return 0;
}
