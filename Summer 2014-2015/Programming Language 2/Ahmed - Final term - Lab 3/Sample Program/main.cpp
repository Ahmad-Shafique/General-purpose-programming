#include <iostream>

using namespace std;

class base{
    public:
    virtual void vfunc(){cout<<"This is base's vfunc()\n ";}
};

class derived1:public base{
    void vfunc(){cout<<"This is derived1's vfunc()";}
};

class derived2:public base{
    void vfunc(){cout<<"This is derived2's vfunc()";}
};

int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;
    p=&b;
    p->vfunc();
    p=&d1;
    p->vfunc();
    p=&d2;
    p->vfunc();
    return 0;
}
