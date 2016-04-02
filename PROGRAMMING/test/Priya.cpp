#include <iostream>
#include <fstream>

using namespace std;

int a,b,casse;

void calculator(){
	cout<<"please enter 2 numbers\n";
	cin>>a>>b;
	cout<<"what would you like to do?\n";
	cout<<"Press\n1 for addition\n2 for subtraction\n3 for multipkication\n";
	cin>>casse;
	//set:
	ofstream OutFile;
	OutFile.open("output.txt", ios::app );
	switch(casse){
		case 1:
			OutFile<<a<<" + "<<b<<" = "<<a+b<<endl;
			break;
		case 2:
			OutFile<<a<<" - "<<b<<" = "<<a-b<<endl;
			break;
		case 3:
			OutFile<<a<<" * "<<b<<" = "<<a*b<<endl;
			break;
		default:
			cout<<"unable to recognize\n";
			break;
	}
	OutFile.close();
}


int main(){
	int amtOfCases;
	cout<<"How many pair output would you like to process ?\n";
	cin>>amtOfCases;
	for(int i=0; i <amtOfCases ; i++)
		calculator();
	return 0;
}
