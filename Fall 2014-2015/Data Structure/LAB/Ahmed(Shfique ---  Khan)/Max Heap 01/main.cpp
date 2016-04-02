#include<iostream>
using namespace std;
const int SIZE = 20;
int arr[SIZE] = {0};
void AddToMaxHeap(int value)
{
	arr[0]++;
	arr[ arr[0] ] = value;

	int i = arr[0];
	while(i > 1)
	{
		if(arr[i/2] < value)
		{
			arr[i] = arr[i/2];
			i = i/2;
		}
		else
		{
			break;
		}
	}
	arr[i] = value;
}

void remove(int value)
{
    if(arr[0] == 0)
    {
        cout<<"Heap is empty"<<endl;
    }
    else
    {
        int k = arr[0];
        while(arr[k] != value)
        {
            k--;
        }
        int j = arr[0];
        if(arr[k*2] == 0)
        {
            arr[k]=arr[j];
        }
        else
        {
            if(arr[k*2]>arr[(k*2)+1])
            {
                arr[k] = arr[k*2];
                arr[k*2] = arr[j];
            }
            else
            {
                arr[k] = arr[(k*2)+1];
                arr[(k*2)+1] = arr[j];
            }
        }
        arr[0]--;
    }

}

void print()
{
	for(int i = 1; i <= arr[0]; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
int main()
{
	AddToMaxHeap(45);
	AddToMaxHeap(20);
	AddToMaxHeap(34);
	AddToMaxHeap(64);
	AddToMaxHeap(15);
	AddToMaxHeap(75);
	AddToMaxHeap(72);
	AddToMaxHeap(56);
	AddToMaxHeap(26);
	AddToMaxHeap(18);
	print();
	remove(26);
	remove(75);
	print();
	return 0;
}
