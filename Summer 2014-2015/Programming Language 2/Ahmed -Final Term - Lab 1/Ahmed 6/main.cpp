#include <iostream>

using namespace std;

class a
{
public:
    a(int nValue)
    {
        cout<<"A : "<<nValue<<endl;
    }
};

class b:public a
{
public:
    b(int nValue,double dValue):a(nValue)
    {
        cout<<"\nB: "<<dValue<<endl;
    }
};

class c:public b
{
public:
    c(int nValue,double dValue,char chValue):b(nValue,dValue)
    {
        cout<<"\nC: "<<chValue<<endl;
    }
};

int main()
{
    c cclass(5, 4.3, 'R');
    return 0;
}
