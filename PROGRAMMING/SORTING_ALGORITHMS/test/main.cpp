/*
#include<iostream>
#include <cstdio>
#include<cmath>

using namespace std;

int main(){
double v=0,t=0,a=0,s=0;
while(scanf("%d %d", &v, &t) != EOF ){
//while(scanf("%d %d",&v,&t) != EOF){
a = v/t;
//cout<<v<<" "<<t<<" "<<a<<endl;
s=(a*pow(2*t,2))/2;
printf("%d\n",s);
return 0;
}
}
*/

/*
#include<iostream>
#include <cstdio>
#include <conio>



using namespace std;

int main()
{
    char c;
    //while(scanf("%c", &c) != EOF)
    while((c=getch) != EOF)
    {
        if(c='\"')
            printf("\"",c);
    }
}
*/

/*
#include <iostream>

using namespace std;



int binarySearch(int *A,int low,int high,int value)
{
        if (low>high)
			return -1;
        else {
            int mid= (low+high)/2;
            //if (A[mid]==value)
            if((value > A[mid-1]) && (value < A[mid+1]))
				return mid;
            else if (value<A[mid])
				return binarySearch(A,low,mid-1,value);
            else
				return binarySearch(A,mid+1,high,value);
        }
}

void insert_in_array(int *a,int *b,int arr_size,int value){
    int empty_position = binarySearch(a,0,arr_size-1,value);
    for(int i=arr_size ; i > empty_position ; i--){
        b[i] = b[i-1];
    }
    cout<<"inserting at position "<<empty_position+2<<endl;
    b[empty_position+1] = value;

}


int main(){
    int a[5] = {1,3,5,7,9},b[6];
    for(int i=0;i<5;i++)
        b[i]=a[i];
    //insert_in_array(a,b,5,6);   ///Un-comment_out either
    insert_in_array(a,b,5,2);   ///of the two
    for(int i=0;i<=5;i++)
        cout<<b[i]<<" ";
    cout<<endl;


}
*/


