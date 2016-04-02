#include <iostream>
using namespace std;
int main()
{long long int a,b,r=0,i,itr,k=0;
while(cin>>a>>b){
if(b<a)
{long long int temp;
temp=a;
a=b;
b=temp;}
for(i=a;i<b;i++)
{k=i;
itr=1;
while(k!=1){
if(k%2==1){
k=(3*k)+1;
itr++;}
else{
k=k/2;
itr++;}}
if(r<itr)
r=itr;}
cout<<r<<endl;
r=0;}}

