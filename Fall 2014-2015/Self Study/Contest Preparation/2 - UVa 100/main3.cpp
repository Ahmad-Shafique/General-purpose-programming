#include <iostream>
#include <cstdio>
using namespace std;
int main(){
long long int i,j,reslt=0;
cin>>i>>j;
for(int n=i;n<=j;n++){
long long itr=1;
while(n!=1){
if(n%2==1){
n=(3*n)+1;
itr++;}
else{
n=n/2;
itr++;}}
if(reslt<itr)
reslt=itr;}
cout<<reslt;
return 0;
}
