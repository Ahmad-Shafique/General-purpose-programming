#include <iostream>
#include "useful.h"

using namespace std;

class y{
    int i;
public:
    x x1; //Embeded object;
    y():i(0){}
    void f(int ii){i=ii;}
    const int g(){return i;}
};

int main()
{
    y y1;
    y1.f(47);
    cout<<y1.g()<<"\n";

    y1.x1.set(37);
    cout<<y1.x1.permute();
}
