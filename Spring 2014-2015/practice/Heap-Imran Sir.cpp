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

void RemoveFromMaxHeap()
{
	if(arr[0] == 0)
	{
		cout << "Heap empty" << endl;
	}
	else
	{
		//int valueToRemove = arr[1];
		arr[0]--;
		int i = 1;
		while(2*i < arr[0])
		{
			if(arr[2*i] > arr[2*i+1])
			{
				arr[i] = arr[2*i];
				for(int j = 2*i ; j<= arr[0] ; j++ )
                {
                    arr[j]= arr[j+1];
                }
				i = 2*i;
			}
			else
			{
				arr[i] = arr[2*i+1];
				for(int j = (2*i)+1 ; j<= arr[0] ; j++ )
                {
                    arr[j]= arr[j+1];
                }
				i = 2*i+1;
			}
		}
		//arr[i] = valueToRemove;
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
	AddToMaxHeap(50);
	AddToMaxHeap(60);
	AddToMaxHeap(70);
	AddToMaxHeap(40);
	AddToMaxHeap(55);
	AddToMaxHeap(42);
	print();
	RemoveFromMaxHeap();
	print();
}
