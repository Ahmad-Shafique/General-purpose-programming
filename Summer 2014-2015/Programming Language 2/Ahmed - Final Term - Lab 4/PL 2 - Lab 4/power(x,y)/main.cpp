#include <iostream>

using namespace std;

template<class t>
t power(t x,t y)
{
    t z=x;
    for(int i=0;i<y-1;i++)
        z*=x;
    return z;
}

int main()
{
    cout<<power(2,5)<<endl;
    return 0;
}
