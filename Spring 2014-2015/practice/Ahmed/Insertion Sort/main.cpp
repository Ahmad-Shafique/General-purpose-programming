#include <iostream>

using namespace std;

void print(int size , int a[])
{
    cout<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(int size, int a[])
{
    cout<<"Enter the elements of the array"<<endl;
    /*int buff;
    for(int i=0 ;i<size ; i++)
    {
        cin>>buff;
        if(i>0)
        {
            for(int j = 0 ;  j < i ; j++)
            {
                if(a[j] > buff || j == i-1)
                {
                    if(j == i-1)
                    {
                        a[i] = buff;
                    }
                    else
                    {
                        for(int k=i ; k>j ; k--)
                        {
                            a[k] = a[k-1];
                        }
                        a[j] = buff;
                    }
                }
            }
        }
        else
            a[i] = buff;
    }*/

    /*int buff;
    for(int i=0 ;i<size ; i++)
    {
        cin>>buff;
        if(i == 0)
        {
            a[i] =buff;
        }
        else
        {
            int j;
            for(j=0 ; j<i ; j++)
            {
                if(a[j]<buff)
                    break;
            }
            if(j == i)
            {
                a[i] = buff;
            }
            else
            {
                for(int k=i ; k>j ; k--)
                {
                    a[k] = a[k-1];
                }
                a[i] = buff;
            }
        }
    }*/
    int i,input;
    for(i=0 ; i<size ; i++)
    {
        int j;
        cin>>input;
        if(i>0)
        {
            for(j=0; j<i ;j++)
            {
                if(a[j]>input)
                    break;
            }
            if(j != i)
            {
                for(int k=i ; k>j ; k--)
                {
                    a[k] = a[k-1];
                }
                a[j] = input;
            }
            else
            {
                a[i] = input;
            }
        }
        else
        {
            a[i] = input;
        }
    }

}

int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    insertion_sort(size,a);
    print(size,a);


}
