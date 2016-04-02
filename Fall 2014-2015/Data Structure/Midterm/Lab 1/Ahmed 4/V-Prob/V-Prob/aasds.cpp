#include <iostream>

using namespace std;

class stack
{
private:
    int a[3];
    int stack_top;

public:
    stack(){stack_top=-1;}
    void push(int num);
    void pop();
};

void stack::push(int num)
{
    stack_top++;
    if(stack_top>=3)
        cout<<"Stack limit reached\n"<<endl;
    else
    {
        cout<<"push "<<num<<endl;
        a[stack_top]=num;
    }
    //cout<<stack_top;
}

void stack::pop()
{
    //cout<<stack_top;
    if(stack_top<0)
        cout<<"Stack is empty\n"<<endl;
    else
    {
        cout<<"pop "<<a[stack_top]<<endl;
        //a[stack_top]=0;
        stack_top--;
    }

}

int main()
{
    stack s1;
    s1.push(5);
    s1.push(4);
    s1.push(6);
    s1.push(7);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
	int n;
	cin>>n;
    return 0;
}
