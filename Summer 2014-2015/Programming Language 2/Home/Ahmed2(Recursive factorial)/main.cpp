#include <iostream>

using namespace std;

int recursive_factorial(int a)
{
    if(a>1)
        return a*recursive_factorial(a-1);
}

int main()
{
    int a;
    cin>>a;
    cout<<"Factorial = "<<recursive_factorial(a);
    return 0;
}

