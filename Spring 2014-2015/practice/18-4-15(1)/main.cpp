#include <iostream>

using namespace std;

template<class t>
void swp(t *a, t *b)
{
    t temp;
    temp = *a;
    *a=*b;
    *b= temp;
}

int main()
{
    int a=2 , b= 3;
    cout<<a<<b<<endl;
    swp(&a,&b);
    cout<<a<<b<<endl;
    return 0;
}
