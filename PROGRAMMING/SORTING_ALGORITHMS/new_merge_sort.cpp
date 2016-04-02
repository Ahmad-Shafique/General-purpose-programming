#include <iostream>
#include <algorithm>

using namespace std;


int size(int *arr){
	int counter=0; 
	int i=0;
	while(arr[i++])
		counter++;
	return counter;

}

void print(int *array)
{
	for(int i=0 ; i< size(array); i++)
		cout<<array[i]<<" ";
	cout<<endl;
}



void copy(int *arr,int low,int high,int *new_arr,int size)
{

int i=0;

while(i<size)
	arr[low++] = new_arr[i++];

}




int merge(int *arr, int low, int mid, int high)
{

	if((high-low) == 0)
		return 0;

	else if((high - low) == 1){
		if(arr[low] > arr[high])
			swap(arr[low],arr[high]);
		return 0;
	}

	else{
		int i=low, x1=low , x2=mid+1;
		int k=0;
		int size = (high - low) + 1;
		int new_arr[size];
		while(i!=(high+1)){ //edited

			if(x1 == (mid+1) && x2 < (high+1)) //edited
				new_arr[k++] = arr[x2++];

			else if(x2 > high && x1 < (mid+1)) //edited //re-edited
				new_arr[k++] = arr[x1++];

			else{
				if(arr[x1] < arr[x2])
					new_arr[k++] = arr[x1++];

				else
					new_arr[k++] = arr[x2++];

			}
			i++;
		}

		copy(arr,low,high,new_arr,size);
		return 0;
	}
}

void merge_sort(int *arr , int low , int high)
{

	int mid = (low + high)/2;

	if((high - low) > 1){
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
	}

	merge(arr,low,mid,high);
}


int main()
{
	int arr[15] = {1,2,10,5,4,3,11,9,8,7,6,15,14,12,13};

	merge_sort(arr , 0 , 14);
	print(arr);
	/*for(int i=0 ; i<size(arr) ; i++)
		cout<<arr[i]<<" ";*/
	
	return 0;
}


