#include <iostream>

using namespace std;

class one
{
    private:
    int num1;
    int num2;

    public:
    void enter_num();
    friend int addition(one a);
};

void one::enter_num()
{
    int x,y;
    cin>>x>>y;
    num1=x;
    num2=y;
}

int addition(one a)
{
    return (a.num1+a.num2);
}

int main()
{
    one a1;
    int sum;
    cout<<"Enter 2 numbers\n";
    a1.enter_num();
    sum = addition(a1);
    cout<<"\nSum = "<<sum;
    return 0;
}
