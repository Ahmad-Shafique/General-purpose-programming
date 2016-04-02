#include<iostream>
using namespace std;
class SStack
{
private:
    int *arr=NULL;
    int top=0;
public:
    SStack(int size)  ///Parameterized constructor
    {
        arr=new int[size];
    }
    SStack()   ///Default constructor
    {
        arr=new int[5];   ///new ___  = dynamic memory allocation
    }
    void push(int val)   /// return_type function_name (parameters)
    {
        if(top == 11)
        {
            cout<<"Stack is full !!!"<<endl;
        }
        else
        {
            cout <<"push"<<val<<endl;
            arr[top] = val;
            top ++ ;
        }
    }
    void pop()
    {
        cout<<"Popped "<< arr[top-1]<<endl;
        top--;
    }
    void print()
    {
        if(top == 0)
        {
            cout<<"Stack is empty !!!";
        }
        else
        {
            for(int i=0 ; i<top  ; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    SStack *stk=new SStack[10];
    stk->push(5);
    stk->push(4);
    stk->push(7);
    stk->push(8);
    stk->push(9);
    stk->pop();
    stk->print();
}
