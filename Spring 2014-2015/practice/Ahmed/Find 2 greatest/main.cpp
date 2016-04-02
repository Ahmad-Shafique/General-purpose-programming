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

int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    input(size,a);
    int grt1 = 0 , grt2 = 0 ;
    for(int i=0 ; i<size ; i++)
    {
        if(a[i] > grt1)
        {
            grt1 = a[i];
        }
    }
    for(int i=0 ; i < size ; i++)
    {
        if((a[i]>grt2)&&(a[i] != grt1))
        {
            grt2 = a[i];
        }
    }
    cout<<"The 2 greatest numbers are \n"<<grt1<<" and "<<grt2<<endl;

}
