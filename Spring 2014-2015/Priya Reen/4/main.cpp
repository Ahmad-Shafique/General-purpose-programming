#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;

    cout<<"Enter n:";
    cin>>n;
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    cout<<" 2+4+6+8....n = ";
    cout<<sum<<endl;
}
