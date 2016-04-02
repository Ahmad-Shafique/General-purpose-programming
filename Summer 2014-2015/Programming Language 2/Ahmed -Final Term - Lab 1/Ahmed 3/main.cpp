#include <iostream>
#include "useful.h"

using namespace std;

class y:public x
{
    int i;
public:
    y():i(2){}
    int change(){return i;}
    void set(int ii){i=ii;x::set(ii);}
};

int main()
{
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    y d;
    cout<<d.change()<<endl;
    cout<<d.read()<<endl;
    cout<<d.permute()<<endl;
    d.set(12);
    cout<<d.change()<<endl;
    cout<<d.permute()<<endl;
    return 0;
}
