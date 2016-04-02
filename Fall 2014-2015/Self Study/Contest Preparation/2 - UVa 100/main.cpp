#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long n,itr=1;
    scanf("%lld",&n);
    while(n!=1)
    {
        if(n%2==1)
        {
            n=(3*n)+1;
            itr++;
        }
        else
        {
            n=n/2;
            itr++;
        }
    }
    printf("%lld",itr);
    return 0;
}
