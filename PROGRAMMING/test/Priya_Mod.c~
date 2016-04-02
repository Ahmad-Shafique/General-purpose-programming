#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define asize 1000000

int arr[asize];


void copy(int *arr,int low,int high,int *new_arr,int size){
int i=0;

while(i<size)
	arr[low++] = new_arr[i++];

}

int merge(int *arr, int low, int mid, int high){
	if((high-low) == 0)
		return 0;

	else if((high - low) == 1){
		if(arr[low] > arr[high]){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		}
		return 0;
	}

	else{
		int i=low, x1=low , x2=mid+1;
		int k=0;
		int size = (high - low) + 1;
		int new_arr[size];
		while(i!=(high+1)){ 

			if(x1 == (mid+1) && x2 < (high+1)) 
				new_arr[k++] = arr[x2++];

			else if(x2 > high && x1 < (mid+1)) 
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


void print(int *arr){
	int i=0;
	for(i=0 ; i<asize-1 ; i++)
	printf("%d\n",arr[i]);
}


void inputGenerator(){
	int i;
	FILE *tfp;
	tfp =fopen("Test_Case.txt", "w");
	srand(time(NULL));
	for(i=0 ; i<=asize ; i++)
	{
		fprintf(tfp,"%d\n", (rand()%asize));
	}
	fclose(tfp);
}


void inputReader(){

	int data;
	FILE *ifp;
	int x,i=0;
	ifp =fopen("Test_Case.txt", "r");
	while((fscanf(ifp,"%d",&data)) != EOF){
	arr[i]= data;
	i++;
	}
	fclose(ifp);
}

void inputProcessor(){
	merge_sort(arr,0,asize);
}

void outputWriter(){
		int i;
		FILE *ofp;
		ofp =fopen("Output.txt", "w");
		for(i=0 ; i<=asize ; i++)
		{
			fprintf(ofp,"%d\n", arr[i]);
		}
		fclose(ofp);
}


int main()
{
	inputGenerator();
	inputReader();
	inputProcessor();
	outputWriter();
	return 0;
}
