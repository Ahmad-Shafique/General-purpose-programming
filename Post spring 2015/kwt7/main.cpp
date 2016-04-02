#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("INVNTRY");

    if(!out)
    {
        cout<<"cannot open the file\n";
        return 1;
    }

    out<<"Radios " <<39.95 <<endl;
    out<<"Toasters " <<19.95 <<endl;
    out<<"Radios " <<39.95 <<endl;

    out.close();

    return 0;
}
