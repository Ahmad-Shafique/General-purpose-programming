#include <iostream>

using namespace std;

int main()
{
    double height;
    cout << "Enter your Height in feet\n" ;
    cin>>height;
    if(height>6)
    {
        cout<<"You are TALL";
    }
    else if(height<=5.9&&height>=5.4)
    {
        cout<<"You have an average height";
    }
    else
    {
        cout<<"You are SHORT";
    }
    cin.get();
    return 0;
}
