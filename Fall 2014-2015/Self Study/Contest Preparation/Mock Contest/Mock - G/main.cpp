#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    int D,V,res=0;
    for(int i=0 ; i<T ; i++)
    {
        scanf("%d%d",&D,&V);
        res = ((pow(V,D+1))-1)/(D+1);
        printf("Case %d: %d",i+1,res);
    }
    return 0;
}
