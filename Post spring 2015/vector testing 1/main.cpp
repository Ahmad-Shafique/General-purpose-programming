#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v(10);
    for(int i=0 ; i<v.size() ; i++)
    {
        v[i] = i+1;
    }
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<endl<<v[i];
    }
    return 0;
}
