///Doesn't work

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{


    ofstream outbal("balance.txt" , ios::out | ios::binary);

    if(!outbal)
    {
        cout<<"Cannot open file \n";
        return 1;
    }

    outbal.write((char *) &acc , sizeof(struct status));
    outbal.close();

    ifstream inbal("balance" , ios::in | ios::binary);

    if(!inbal)
    {
        cout<<"Cannot open file \n";
        return 1;
    }

    inbal.read((char *) &acc , sizeof(struct status));

    cout << acc.name << endl;
    cout<<"Account # " <<acc.account_num;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<< endl << "Balance : $" <<acc.balance;

    inbal.close();

    return 0;
}

