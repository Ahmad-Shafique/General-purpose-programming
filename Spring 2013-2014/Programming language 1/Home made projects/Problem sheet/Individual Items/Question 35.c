#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size1,size2,size3,loop1,loop2,loop3;
    scanf("%d%d",&size1,&size2);
    size3=size1+size2;
    int array1[size1],array2[size2],array3[size3];
    for(loop1=0;loop1<size1;loop1++)
    {
        scanf("%d",&array1[loop1]);
        array3[loop1]=array1[loop1];
    }
    for(loop2=0;loop2<size2,loop1<size3;loop2++,loop1++)
    {
        scanf("%d",&array2[loop2]);
        array3[loop1]=array2[loop2];
    }
    for(loop3=0;loop3<size3;loop3++)
    {
        printf(" %d ",array3[loop3]);
    }
    return 0;
}
