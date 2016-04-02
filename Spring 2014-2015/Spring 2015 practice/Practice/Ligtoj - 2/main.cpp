#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cas ;
    scanf("%d",&cas);
    for(int i=0 ; i<cas ; i++)
    {
        int a,b,c;
        scanf("%d",&a);
        if(a>10)
        {
            b=a-10;
            c=a-b;
            printf("%d ",b);
            printf("%d",c);
            printf("\n");
        }
        else
        {
            b=0;
            c=a;
            printf("%d ",b);
            printf("%d",c);
            printf("\n");
        }
    }
}
