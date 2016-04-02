#include <iostream>

using namespace std;

const int size = 5;
int arr[size],fr=0,rr=0;

void push(int value)
{

    arr[rr]=value;
    cout<<"Pushed "<<arr[rr]<<endl;
    rr=(rr++)%size;
    /*if(rr>=size)
    {
        rr=rr%size;
    }*/
}

void pop()
{
    if(fr==rr)
    {
        cout<<"Queue is empty" <<endl;
    }
    else
    {
        cout<<"Popped "<<arr[fr]<<endl;
        fr=(fr++)%size;
        /*if(fr>=size)
        {
            fr=fr%size;
        }*/
    }
}

void print()
{
    int f1=fr;
    if(f1==rr)
    {
        cout<<"Queue is empty "<<endl;
    }
    else
    {
        while(f1!=rr)
        {
            cout<<arr[f1]<<"  ";
            f1=(f1++)%size;
            /*if(fr>=size)
            {
                fr%=size;
            }*/
        }
        cout<<endl;
    }
}

int main()
{
    push(8);
    pop();
    push(7);
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    pop();
    pop();
    //print();
    return 0;
}
