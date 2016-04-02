#include <iostream>
#include <vector>
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
	//int siz = size(array);
       cout<<size(array)<<endl;
	for(int i=0 ; i< size(array); i++)
		cout<<array[i]<<" ";
	cout<<endl;
}


int main()
{
	
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	print(arr);
	/*for(int i=0 ; i<size(arr) ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	*/
	return 0;
}


