#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("nft");
    bool b = false;
    out<<"a1"<<1<<b;

    out.close();
    return 0;
}
