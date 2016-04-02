#include <iostream>

using namespace std;

int size = 5;
int* arr=new int[size],fr=0,rr=0;

void resize()
{
    int fr1=fr;
    size*=2;
    int* nw_arr=new int[size];
    int r1=0;
    for(;fr1!=rr;fr1=(fr1+1)%size)
    {
        nw_arr[r1]=arr[fr1];
        r1++;
    }
    delete [] arr;
    arr=nw_arr;
    fr=0,rr=r1;
    cout<<"Array resized"<<endl;
}

void push(int value)
{
    if(rr==size-1)
    {
        resize();
    }
        arr[rr]=value;
        cout<<"Pushed "<<arr[rr]<<endl;
        //rr=(rr++)%size;
        rr=(rr+1)%size;
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
        //fr=(fr++)%size;
        //fr++
            fr=(fr+1)%size;
    }
}

void print()
{
    int f1=fr;

        while(f1!=rr)
        {
            cout<<arr[f1]<<"  ";
            f1=(f1+1)%size;

        }
        cout<<endl;
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
    push(3);
    push(9);
    push(10);
    push(11);
    push(12);
    push(13);
    pop();
    pop();
    print();
    return 0;
}
