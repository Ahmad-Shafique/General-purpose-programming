#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <string> v;
    string str[5] = {"Hello"," Hi "," HOW "," Hence "," Herefore"};

    for(int i=0 ; i<5 ; i++)
    {
        v.push_back(str[i]);
    }

    for(int i=0 ; i<5 ; i++)
    {
        cout<<v[i];
    }
    cout << endl;

    vector <string>::iterator p;
    p=v.begin();
    v.erase(p,p+2);

    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
