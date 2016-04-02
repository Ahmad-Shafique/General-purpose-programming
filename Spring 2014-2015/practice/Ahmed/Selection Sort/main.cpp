#include <iostream>

using namespace std;

void input(int size , int a[])
{
    cout<<"Enter the values of the array"<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cin>>a[i];
    }
}

void print(int size , int a[])
{
    cout<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void selection_sort(int size, int a[])
{
    /*int init , var ;
    for(int i =0 ; i<size ; i++)
    {
        int small = init;
        for(int j = init ; j<i ;j++)
        {
            if(a[j]<a[small])
            {
                small = j;
            }
        }
        int temp = a[init];
        a[init] = a[small];
        a[small] = temp;
        init++;
    }*/

    int asw,temp;
    for(int i=0 ; i<size ; i++)
    {
        asw = i;
        for(int j = i+1 ; j<size ; j++)
        {
            if(a[j] < a[asw])
            {
                asw = j;
            }
        }
        if(a[i] > a[asw])
        {
            temp = a[i];
            a[i] = a[asw];
            a[asw] = temp;
        }
    }

}

int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    input(size,a);
    print(size,a);
    selection_sort(size,a);
    print(size,a);


}
