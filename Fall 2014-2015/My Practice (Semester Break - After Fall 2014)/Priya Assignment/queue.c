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
            cout<<"Queue is full !!!"<<endl;
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
        if(top == 0)
        {
            cout<<"Queue is empty !!!"<<endl;
        }
        else
        {
            cout<<"Popped "<< arr[0]<<endl;
            for(int i=0 ; i < top-1 ; i++)
            {
                arr[i] = arr[i+1];
            }
            top--;
        }
    }
    void print()
    {
        if(top == 0)
        {
            cout<<"Queue is empty !!!";
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
    SStack *que=new SStack[10];
    que->push(5);
    que->push(4);
    que->push(7);
    que->push(8);
    que->push(9);
    que->pop();
    que->print();
}
