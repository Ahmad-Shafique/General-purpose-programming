#include<iostream>
using namespace std;
int main()
{
    int number,remainder;
    cin>>number;
    remainder=number%1;
    if(remainder==0)
    {
        cout<<"IT is prime number";
    }
    else
    {
        cout<<"not prime";

    }
    cout<<"remainder="<<remainder<<endl;
}
