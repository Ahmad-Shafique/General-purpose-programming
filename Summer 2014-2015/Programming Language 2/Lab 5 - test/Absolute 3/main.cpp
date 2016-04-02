#include <iostream>

using namespace std;

class number{

    private:
    float num;

    public:
    number(float f){num=f;}
    //void show(){cout<<"\n"<<num;}
    int absolute(number n);
};

int number::absolute(number n){
    long int x=num;
    if(x<0)
    {
        x=x+(-2*x);
    }
    cout<<"\n"<<x;
    return 0;
}

int main()
{
    float f1;
    cin>>f1;
    number n1(f1);
    //n1.show();
    n1.absolute(n1);
    return 0;
}
