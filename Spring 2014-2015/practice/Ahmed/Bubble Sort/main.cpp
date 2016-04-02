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

void bubble_sort(int size, int a[])
{
    for(int i=size ; i>-1 ; i--)
    {
        for(int j=0 ; j<i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp= a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
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
    bubble_sort(size,a);
    print(size,a);


}
