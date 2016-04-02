#include<iostream>

using namespace std;

const int size=10;

template<typename dtype>
class stack{
    dtype stck[size];
    int tos;
public:
    stack(){tos=0;}
    void push(dtype ob);
    dtype pop();
};

template<typename dtype>void stack<dtype>::push(dtype ob)
{
    if(tos==size){
        cout<<"Stack is full";
        return;
    }
    stck[tos]=ob;
    tos++;
}

template<typename dtype>dtype stack<dtype>::pop()
{
    if(tos==0){
        cout<<"Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    stack<double> ds1,ds2;
    int i;
    ds1.push(1.1);
    ds2.push(2.2);
    ds1.push(3.3);
    ds2.push(4.4);
    ds1.push(5.5);
    ds2.push(6.6);

    for(i=0;i<3;i++)
        cout<<"Pop ds1 : "<<ds1.pop()<<endl;
    for(i=0;i<3;i++)
        cout<<"Pop ds2 : "<<ds2.pop()<<endl;
}
