#include <iostream>

using namespace std;

class number{

    private:
    float num;

    public:
    number(){cout<<"Enter your number\n";cin>>num;}
    int absolute(number n);
};

int number::absolute(number n){
    return int(num);
}

int main()
{
    number n1;
    int y = absolute(n1);
    cout<<"Absolute value of your number is : "<<y<<"\n";
    return 0;
}
