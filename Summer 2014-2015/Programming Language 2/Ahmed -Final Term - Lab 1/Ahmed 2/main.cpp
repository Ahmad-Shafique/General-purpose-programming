#include <iostream>
#include "useful.h"

using namespace std;

class y{
    int i;
    x x1; //Embedded object;
public:
    y():i(0){}
    void f(int ii){i=ii; x1.set(ii);}
    const int g(){return i*x1.read();}
    void permute(){cout<<x1.permute();}
};

int main()
{
    y y1;
    y1.f(47);
    cout<<y1.g()<<endl;
    y1.permute();
    return 0;
}
