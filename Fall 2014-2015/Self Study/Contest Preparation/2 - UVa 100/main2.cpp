#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int i,j,res=0;
    scanf("%lld%lld",&i,&j);
    for(int k=i;k<=j;k++)
        {
            long long int itr = 1;
            while(k!=1)
            {
                if(k%2==1)
                {
                    k=(3*k)+1;
                    itr++;
                }
                else
                {
                    k=k/2;
                    itr++;
                }
                if(itr>res)
                res=itr;
            }
        }
    printf("%l64d",res);
    return 0;
}
