#include<iostream>
using namespace std;
class SStack
{
private:
    int *arr=NULL;
    int top=0;
public:
    SStack(int size)
    {
        arr=new int[size];
    }
    SStack()
    {
        arr=new int[5];
    }
    void push(int val)
    {
        cout<<"Pushed "<<val;
        arr[top] = val;
        top++;

    }
    int pop()
    {

        cout<<"popped "<<arr[top];
        top--;
    }
    void print()
    {
        cout<<"Current stack is : "<<endl;
        for(int i = top-1 ; i>-1 ; i--)
        {
            cout<<arr[i]<<"  ";
        }
    }
};
int main()
{
    SStack *stk=new SStack(10);
    stk->push(5);
    stk->push(4);
    stk->push(3);
    stk->push(2);
    stk->push(1);
    stk->pop();
    stk->print();
}
