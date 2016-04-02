#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){

char c;


while((c=cin.get())!=EOF){
	if(c=='\n')
		cout<<endl;
	else{
		c-=7;
		cout<<c;
	}
}


return 0;
}

