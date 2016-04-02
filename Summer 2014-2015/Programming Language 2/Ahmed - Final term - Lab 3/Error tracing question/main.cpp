#include <iostream>

using namespace std;

class abc{
    public:
    virtual void func()=0;
};

class xyz:public abc{
    public:
    void func(){cout<<"This is a function of xyz";}
};

int main()
{
    abc obj1; ///Cannot declare in this format since base class is an abstract class
    xyz obj2;
    obj1.func();
    obj2.func();
    return 0;
}
