#include <iostream>

using namespace std;

void recursive_binary(int num)
{
    if((num/2)>1)
    {
        recursive_binary(num/2);
    }
    else
        cout<<num/2;
    cout<<num%2;
}

int main()
{
    int num;
    cin>>num;
    recursive_binary(num);
    return 0;
}
