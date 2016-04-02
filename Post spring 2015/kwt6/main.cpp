#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char a;
    int b;
    bool c;
    ifstream in("nft.txt");
    in>>a>>b;
    cout<<a<<b;
    return 0;
}
