#include <iostream>
#include <stdio.h>

using namespace std;

int arr[100],a_p=0;

void insertion_sort_ascending(int value)
{
    if(a_p == 0)
    {
        arr[a_p++] = value;
    }
    else if(a_p > 0)
    {
        int i=0;
        while(i != a_p)
        {
            if(arr[i]>value)
                break;
            i++;
        }
        if(i==a_p)
        {
            arr[a_p++] = value;
        }
        else if(i < a_p)
        {
            for(int j=a_p+1;j>i;j--)
            {
                arr[j] = arr[j-1];
            }
            arr[i] = value;
            a_p++;
        }
    }
}

void insertion_sort_descending(int value)
{
    if(a_p == 0)
    {
        arr[a_p++] = value;
    }
    else if(a_p > 0)
    {
        int i=0;
        while(i != a_p)
        {
            if(arr[i]<value)
                break;
            i++;
        }
        if(i==a_p)
        {
            arr[a_p++] = value;
        }
        else if(i < a_p)
        {
            for(int j=a_p+1;j>i;j--)
            {
                arr[j] = arr[j-1];
            }
            arr[i] = value;
            a_p++;
        }
    }
}

int main()
{
    int x;
    freopen("c:\data.txt","r",stdin);
    for(int i=0; i<50;i++)
    {
        cin>>x;
        insertion_sort_descending(x);
    }
    for(int i=50; i<100;i++)
    {
        cin>>x;
        insertion_sort_ascending(x);
    }
    for(int i=0; i<100; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
