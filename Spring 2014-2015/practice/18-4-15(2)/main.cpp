#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> intvec(10);
    cout << intvec.size() << endl;
    intvec.push_back(3);
    intvec.push_back(4);
    intvec.push_back(1);
    intvec.push_back(2);
    intvec.begin();
    cout<<intvec[9]<<" "; //Doesn't work
    return 0;
}
