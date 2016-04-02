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
    friend point operator+(point op2);
    friend point operator++(point op);
};
point operator+(point op2)
{
    op2.x_coordinate=op2.x_coordinate+op2.x_coordinate;
    op2.y_coordinate=op2.y_coordinate+op2.y_coordinate;
    return op2;
}
point operator++(point op)
{
    op.x_coordinate++;
    op.y_coordinate++;
    //return *this;
}
int main()
{
    point ob1(10,20),ob2(5,30);
    ob1.show();
    ++ob1;
    ob1.show();
    return 0;
}
