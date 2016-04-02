#include <iostream>

using namespace std;

template <class x,class y> x add(x &a, y &b)
{
    x c;
    c = a+b;
    return c;
}

int main()
{
    float a=0.25;
    int a1 = 10;
    cout<<add(a,a1)<<endl;
    return 0;
}
