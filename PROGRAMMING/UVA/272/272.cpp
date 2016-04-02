#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int main(){

string s,s1;
int i=0;
bool flag=true;

while(getline(cin,s1)){
	s+=s1;
	s+="\n";
}

while(s[i]){
	if(s[i]=='\"'){
		if(flag == true){
			cout<<"``";
			flag = false;
		}
		else{
			cout<<"\'\'";
			flag=true;
		} 
	}
	else
		cout<<s[i];
	i++;
}

return 0;

}

