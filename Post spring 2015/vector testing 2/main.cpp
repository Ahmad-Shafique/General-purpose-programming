#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector <int> v(5);
    vector <int>::iterator g;

    g=v.begin();
    while(g!= v.end())
    {
        *g  = 1+1;
        g++;
    }

    g = v.begin();

    while(g != v.end())
    {
        cout<<*g<<" ";
        g++;
    }



    return 0;
}
