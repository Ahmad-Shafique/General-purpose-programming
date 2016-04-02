#include <iostream>

using namespace std;

class number{

    private:
    float num;

    public:
    //number(float f){num=f;}
    //void show(){cout<<"\n"<<num;}
    int absolute(double x);
};

int number::absolute(double x){
    int y=int(x);
    if(y<0){y=-(y);}
    cout<<"\n"<<y<<"\n";
    return 0;
}

int main()
{
    /*float f1;
    cin>>f1;
    number n1(f1);
    n1.show();*/
    number n1;
    n1.absolute(-10);
    n1.absolute(-10.101);
    n1.absolute(-10L);
    return 0;
}
