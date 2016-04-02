#include <iostream>

using namespace std;


const int size = 3;
int arr[size],fr=0,rr=0;

void push(int value)
{
    if(rr>=size)
        rr=rr%size;
    arr[rr]=value;
    cout<<"Pushed "<<value<<endl;
    rr++;
}

void pop()
{
    if(fr==rr)
        cout<<"Queue is empty"<<endl;
    else
    {
        cout<<"Popped "<<arr[fr]<<endl;
        fr++;
        if(fr>=size)
            fr=fr%size;
    }
}

void print()
{
    if(fr==rr)
        cout<<"Queue is empty"<<endl;
    else
    {
        do
        {
            cout<<arr[fr]<<" ";
            fr++;
            if(fr>=size)
                fr=fr%size;
        }while(fr!=rr);
    }
}

int main()
{
    push(8);
    push(7);
    pop();
    push(6);
    push(5);
    pop();
    push(4);
    pop();
    push(3);
    push(2);
    pop();
    print();
    return 0;
}
