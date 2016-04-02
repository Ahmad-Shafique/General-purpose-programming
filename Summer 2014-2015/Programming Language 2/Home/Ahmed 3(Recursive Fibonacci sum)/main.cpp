#include <iostream>

using namespace std;

int recursive_fibonacci(int a,int b,int n)
{
    if(n-1>0)
        return b+recursive_fibonacci(b,(a+b),n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<"Sum of "<<n<<" fibonacci numbers = "<<recursive_fibonacci(0,1,n);
    return 0;
}
