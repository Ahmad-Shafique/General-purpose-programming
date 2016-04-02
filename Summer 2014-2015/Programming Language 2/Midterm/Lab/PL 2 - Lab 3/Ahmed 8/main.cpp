#include <iostream>

using namespace std;

#define SIZE 50

class stack
{
    int stk[SIZE];                //holds the stack
    int tos;                      //index of top of stack
public:
    void init();
    void push(int ch);
    int pop();
};

void stack::init()
{
    tos = 0;
}

void stack::push(int ch)
{
    if(tos==SIZE)
    {
        cout<<"Stack is full";
        return;
    }
    stk[tos]=ch;
    tos++;
}

int stack::pop()
{
    if(tos==0)
    {
        cout<<"Stack is empty";
        return 0;
    }
    tos--;
    return stk[tos];
}

int main()
{
    stack s1,s2;
    s1.init();
    s2.init();
    for(int i=2;i<100;i+=2)
    {
        s1.push(i);
        s2.push(i+1);
    }
    for(int i=1;i<50;i++)
    {
        cout<<"Pop s1 :"<<s1.pop()<<"\t";
        cout<<"Pop s2 :"<<s2.pop()<<endl;
    }
    return 0;
}

