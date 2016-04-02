// Ahmed 1.cpp : Defines the entry point for the console application.


#include <iostream>
using namespace std;
class student
{
	char name[80];
	int rollno;
	double marks[5];
public:
	student(char NAME[80],int ROLLNO, double MARKS[5]);
	double percentage(double MARKS1[5]);
	char grade(double PERCENTAGE);
};

student::student(char NAME[80],int ROLLNO, double MARKS[5])
{
	name[80]=NAME[80];
	rollno=ROLLNO;
	marks[5]=MARKS[5];
}

double student::percentage(double MARKS1[5])
{
	double PERCENTAGE;
	for(int x=0;x<5;x++)
	{
		PERCENTAGE=PERCENTAGE+MARKS1[x];
	}
	cout<<"\nPercentage ="<<PERCENTAGE;
}
int main()
{
	char n[80];
	int r;
	double m[5];
	cout<<"Enter the name; followed by rollno; followed by marks";
	cin>>n;
	cin>>r;
	for(int y=0; y<5; y++)
	{
		cin>>m[y];
	}
	student s1(n,r,m);
	s1.percentage(m);
	return 0;
}

