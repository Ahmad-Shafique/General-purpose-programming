#include <iostream>

using namespace std;

#define SIZE 10

class stack
{
    int stk[SIZE];                //holds the stack
    int tos;                      //index of top of stack
public:
    void init();
    void push(int ch);
    char pop();
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
    }
    stk[tos]=ch;
    tos++;
}

char stack::pop()
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
    int i;

    for(i=0;i<100;i++)
    {
        if(i%2==1)
        {
            s1.push(i);
            cout<<"\n Push s1 :"<<s1.push(i);
        }
        if(i%2==0)
        {
            s2.push(i);
            cout<<"\n Push s1 :"<<s2.push(i);
        }
    }

    for(i=0;i<100;i++)
    {
        if(i%2==1)
        {
            cout<<"\n Pop s2 :"<<s1.pop(i);
        }
        if(i%2==0)
        {
            cout<<"\n Pop s2 :"<<s2.pop(i);
        }
    }

    return 0;
}

