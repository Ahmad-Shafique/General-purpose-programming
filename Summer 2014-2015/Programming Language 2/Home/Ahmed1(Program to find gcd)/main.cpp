#include <iostream>

using namespace std;

int recursive_gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        recursive_gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD = "<<recursive_gcd(a,b);
    return 0;
}
