#include <iostream>
#include <cmath>

using namespace std;

#define PI 22/7

class shape{
    protected:
    float area;
    public:
    shape():area(0){}
    virtual void display(){cout<<"Member of shape(Area) = "<<area<<endl;}
    virtual void calculate_area()=0;
};

class circle:public shape{
    float radius;
    public:
    circle(float r):radius(r){}
    void display(){cout<<"Circle radius and area = "<<radius<<","<<area<<endl;}
    void calculate_area(){area = PI*pow(radius,2);}
};

class rectangle:public shape{
    float length,breadth;
    public:
    rectangle(float l,float b):length(l),breadth(b){}
    void display(){cout<<"Rectangle length,breadth and area = "<<length<<","<<breadth<<","<<area<<endl;}
    void calculate_area(){area=length*breadth;}
};

int main()
{
    shape *p;
    circle c1(5);
    rectangle r1(4,6);
    p=&c1;
    p->calculate_area();
    p->display();
    p=&r1;
    p->calculate_area();
    p->display();
    return 0;
}
