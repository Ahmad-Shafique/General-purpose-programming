#include <iostream>

using namespace std;

class shape{
    public:
    virtual void draw()=0;
};

class circle:public shape{
    public:
    void draw(){cout<<"Drawing circle...\n";}
};

class rectangle:public shape{
    public:
    void draw(){cout<<"Drawing rectangle...\n";}
};

int main()
{
    circle c;
    rectangle r;
    c.draw();
    r.draw();
    return 0;
}
