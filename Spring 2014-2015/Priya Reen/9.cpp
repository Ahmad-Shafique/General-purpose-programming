#include <iostream>
using namespace std;

int FibNumber(int n ,int n1 , int n2 , int ct)
{
    if(ct == n)
        return 0;
    else
    {
        ct++;
        cout<<" "<<n2;
        FibNumber(n,n2,n1+n2,ct);
    }
}

int main()
{
    cout << " Enter  Number: ";
    int Init = 0;
    cin >> Init;
    FibNumber(Init,0,1,0);
    return 0;

}
