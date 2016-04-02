#include <iostream>

using namespace std;

int main()
{
    long long int n,m,c,a1,a2,res=1;
    cin>>n>>m;
    a1=n-m;
    if(a1>m)
    {
        int j=m;
        for(int i=a1+1 ; i<=n ; i++ )
        {
            if(j<=0)
            {
                res = res * (n/i);
            }
            else
            {
                res = res * (n/(i*j));
            }
            J--;
            n--;
        }
    }
    else
    {
        int j = a1+1 ;
        for(int i=m ; i>0;i-- )
        {
            if(j>n)
            {

            }
            else
            {

            }
            j++;
            n--;
        }
    }

    return 0;
}
