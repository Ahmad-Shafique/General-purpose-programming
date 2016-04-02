#include<iostream>

using namespace std;
int main()
{
int lim=2;
for(int i=1;i<=5;i=i+2)
{
for(int k=1;k<=lim;k++)
{
cout<<" ";
}
for(int j=1;j<=i;j++)
{
cout<<j;
}
cout<<endl;
lim--;
}
return 0;
}
