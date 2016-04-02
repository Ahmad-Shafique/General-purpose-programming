#include <iostream>

using namespace std;

int main()
{
    srand (time(NULL));
    int t,a,b,c;
    cin>>t;
    for(int i=1; i<=t ; i++)
    {
        cin>>a;
        b = rand()%a;
        c = a-b;
        cout<<b<<" "<<c<<endl;
    }
    return 0;
}
