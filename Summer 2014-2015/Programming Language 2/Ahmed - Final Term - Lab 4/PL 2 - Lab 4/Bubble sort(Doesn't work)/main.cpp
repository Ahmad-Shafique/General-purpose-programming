#include <iostream>

using namespace std;

#define size 3

/*template<typename dtype>
void bubble_sort<dtype &ar>
{
    int i;
    dtype c;
    for(i=0;i<size;i++)
    {
        int c;
        c=(ar[i]>ar[i+1]?ar[i]:ar[i+1]);
        if(c==ar[i])
        {
            ar[i]=ar[i+1];
            ar[i+1]=c;
        }
        else if(c==ar[i+1])
        {
            ar[i+1]=ar[i];
            ar[i]=c;
        }
    }

}*/

void bubble_sort(int *ar)
{

    int i;
    for(i=0;i<size;i++)
    {
        int c;
        c=(ar[i]>ar[i+1]?ar[i]:ar[i+1]);
        if(c==ar[i])
        {
            ar[i]=ar[i+1];
            ar[i+1]=c;
        }
        else if(c==ar[i+1])
        {
            ar[i+1]=ar[i];
            ar[i]=c;
        }
    }
}


int main()
{
    int ar[size];
    for(int i=0;i<size;i++)
        cin>>ar[i];
    bubble_sort(ar);
    cout<<"Bubble sorted : \n";
    for(int i=0;i<size;i++)
        cout<<ar[i]<<" ";
    return 0;
}
