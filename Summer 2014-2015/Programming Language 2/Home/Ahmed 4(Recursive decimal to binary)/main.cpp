#include <iostream>

using namespace std;

int result[100],x=0;

void recursive_binary(int num)
{
    if((num/2)>1)
    {
        result[x]=num%2;
        x++;
        recursive_binary(num/2);
    }
    else
        cout<<num/2;
}

int main()
{
    int num;
    cin>>num;
    recursive_binary(num);
    for(;x>-1;x--)
    {
        cout<<result[x];
    }
    return 0;
}
