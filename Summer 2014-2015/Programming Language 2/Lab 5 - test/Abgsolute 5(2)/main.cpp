#include <iostream>

using namespace std;

class number{

    private:
    float num;

    public:
    //number(float f){num=f;}
    //void show(){cout<<"\n"<<num;}
    int absolute(int x);
    float absolute(float x);
    double absolute(double x);
    long int absolute(long int x);
};

int number::absolute(int x){
    if(x<0){x=-x;}
    return x;
}

float number::absolute(float x){
    if(x<0){x=-x;}
    return x;
}

double number::absolute(double x){
    if(x<0){x=-x;}
    return x;
}

long int number::absolute(long int x){
    if(x<0){x=-x;}
    return x;
}

int main()
{
    /*float f1;
    cin>>f1;
    number n1(f1);
    n1.show();*/
    number n1;
    cout<<" "<<n1.absolute(-10)<<"\n";
    cout<<" "<<n1.absolute(-10.101)<<"\n";
    cout<<" "<<n1.absolute(-10L)<<"\n";

    return 0;
}
