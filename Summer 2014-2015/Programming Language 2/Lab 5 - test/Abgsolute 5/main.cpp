#include <iostream>

using namespace std;

class number{

    private:
    float num;

    public:
    //number(float f){num=f;}
    //void show(){cout<<"\n"<<num;}
    int absolute(char x);
    int absolute(float x);
    int absolute(double x);
};

int number::absolute(char x){
    if(x<0){x=-x;}
    return (int (x));
}

int number::absolute(float x){
    if(x<0){x=-x;}
    return (int (x));
}

int number::absolute(double x){
    if(x<0){x=-x;}
    return (int (x));
}

int main()
{
    /*float f1;
    cin>>f1;
    number n1(f1);
    n1.show();*/
    number n1;

    int (*p1)(char);
    int (*p2)(float);
    int (*p3)(double);

    p1=n1.absolute;
    p2=n1.absolute;
    p3=n1.absolute;

    cout<<" "<<n1.absolute(-10)<<"\n";
    cout<<" "<<n1.absolute(-10.101)<<"\n";
    cout<<" "<<n1.absolute(-10L)<<"\n";

    return 0;
}
