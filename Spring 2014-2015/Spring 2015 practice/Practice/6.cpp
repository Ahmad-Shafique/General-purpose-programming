//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    try{
        if(a == 1)
            throw a;
        else
            cout<<"No error "<<endl;
    }

    catch(...)
    {
        cout<<"Caught an exception "<<endl;
    }
}



