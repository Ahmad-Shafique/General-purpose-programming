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
    stack<char> s1,s2;
    int i;
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0;i<3;i++)
        cout<<"Pop s1 : "<<s1.pop()<<endl;
    for(i=0;i<3;i++)
        cout<<"Pop s2 : "<<s2.pop()<<endl;
}
