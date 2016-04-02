#include <iostream>

using namespace std;

class a
{
    int i;
public:
    a(int ii):i(ii){}
    ~a(){}
    const int f(){return i;}
};

class b
{
    int i;
public:
    b(int ii):i(ii){}
    ~b(){}
    const int f(){return i;}
};

class c:public b
{
    a a1;
public:
    c(int ii):b(ii),a1(ii){}
    ~c(){}
    const int f()
    {
        cout<<a1.f()<<endl;
        cout<<b::f()<<endl;
    }
};

int main()
{
    c c1(47);
    c1.f();
    return 0;
}
