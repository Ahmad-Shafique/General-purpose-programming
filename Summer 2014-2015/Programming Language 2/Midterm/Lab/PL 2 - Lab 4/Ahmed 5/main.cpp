#include <iostream>

using namespace std;

class point{
    private:
    int x_coordinate,y_coordinate;
    public:
    point(){}
    point(int x,int y){
        x_coordinate = x;
        y_coordinate = y;
    }
    void show(){
        cout<<x_coordinate<<",";
        cout<<y_coordinate<<"\n";
    }
    friend point operator+(point op1,point op2);
    friend point operator++(point op1);
};
point operator+(point op1,point op2)
{
    point temp;
    temp.x_coordinate = op1.x_coordinate + op2.x_coordinate;
    temp.y_coordinate = op1.y_coordinate + op2.y_coordinate;
    return temp;
}
point operator++(point op1)
{
    op1.x_coordinate++;
    op1.y_coordinate++;
    return op1;
}
int main()
{
    point ob1(10,20),ob2(5,30);
    ob1.show();
    ob1=ob1+ob2;
    ob1.show();
    ob1=++ob1;
    ob1.show();
    return 0;
}
