#include <iostream>

using namespace std;

#define size 3

template <class dtype>
dtype max(dtype *ar)
{
    dtype c=0;
    for(int i=0;i<size;i++)
    {
        if(ar[i]>c)
        {
            c=ar[i];
        }
    }
    return c;
}

int main()
{
    int ar[size];
    for(int i=0;i<size;i++)
        cin>>ar[i];
    cout<<"Max Value is : "<<max(ar)<<endl;
    return 0;
}
