#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector <char> v;
    char str[10] = "Hello";
    for(int i=0 ; i<10 ; i++)
    {
        v.push_back(str[i]);
    }

    for(int i=0 ; i<10 ; i++)
    {
        cout<<v[i];
    }


    return 0;
}
