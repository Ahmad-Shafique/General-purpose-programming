#include <stdio.h>
#include <iostream>

using namespace std;
const int size = 100;
int arr[size];

void bubble_sort_ascending(int start, int end)
{
    int temp;
    for(int i = end; i > start ; i--)
    {
        for(int j = start; j < i; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubble_sort_descending(int start, int end)
{
    int temp;
    for(int i = end; i > start; i--)
    {
        for(int j = start; j < i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    freopen("e:\data.txt", "r", stdin);
    for(int i = 0;i < size; i++)
    {
        cin >> arr[i];
    }
    //bubble_sort_ascending(0, 49);
    //bubble_sort_descending(50,size);
    for(int i =0 ; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
