#include <iostream>

using namespace std;

void add_sorted(int n,int a[],int size);
void add_first(int n,int a[],int size);
void add_last(int n,int a[],int size);
int choice1();
int choice2();
void show(int a[],int size);

int main()
{
    int a[150]={2,5,6,7,10,15},c1,c2,num,count=0;
    for(int i=0;i<150;i++)
    {
        c1=choice1();
        if(c1==1)
        {
            c2=choice2();
            if(c2==1)
            {
                cin>>num;
                add_first(num,a,count);
            }
            else if(c2==2)
            {
                cin>>num;
                add_last(num,a,count);
            }
            else
            {
                cin>>num;
                add_sorted(num,a,count);
            }
        }
        else
            break;
        count++;
    }
    show(a,150);
    return 0;
}

void add_sorted(int n,int a[],int size)
{
    int i;
    for(i=size;i>-1;i--)
    {
        if(n<a[i])
            a[i]=a[i-1];
        else
            break;
    }
    a[i]=n;
}

void add_first(int n,int a[],int size)
{
    int i;
    for(i=size+1;i>-1;i--)
    {
        a[i-1]=a[i];
    }
    a[0]=n;
}

void add_last(int n,int a[],int size)
{
    int i;
    for(i=0;i<size+1;i++)
    {
        if(a[i]==0)
        {
            a[i]=n;
            break;
        }
    }
}

int choice1()
{
    cout<<"Would you like to enter data ?\nPress 1 for yes and 0 for no\n";
    int chc;
    cin>>chc;
    return chc;
}

int choice2()
{
    cout<<"How do you wish to enter the data ?\nPress \n1 to add first\n2 to add last\n3 to add sorted\n";
    int chc;
    cin>>chc;
    return chc;
}

void show(int a[],int size)
{
    for(int i=0;i<=size;i++)
    {
        if(a[i]==0)
            break;
        else
            cout<<a[i]<<" ";
    }
}
