#include <iostream>

using namespace std;

template <class x> x add(x &a, x &b)
{
    x c;
    c = a+b;
    return c;
}

int main()
{
    int a=10,a1=20;
    cout<<add(a,a1)<<endl;
    return 0;
}
