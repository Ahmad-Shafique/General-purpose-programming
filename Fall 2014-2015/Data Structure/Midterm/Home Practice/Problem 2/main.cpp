#include <iostream>
using namespace std;
int main()
{
    int T,a,b;
    cin>>T;
    T=T%126;
    for(int t=0;t<T;t++)
    {
        cin>>a>>b;
        cout<<endl<<a+b<<endl;
    }
    return 0;
}
