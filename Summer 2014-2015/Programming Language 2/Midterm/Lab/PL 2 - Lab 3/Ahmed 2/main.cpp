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
	PERCENTAGE/=5;
	cout<<"\nPercentage ="<<PERCENTAGE;
}

char student::grade(double PERCENTAGE)
{
    char A,B,C,D,E;
    if(PERCENTAGE>=81.0&&PERCENTAGE<=100.0)
    {
        return A;
    }
    else if(PERCENTAGE>=61&&PERCENTAGE<=80)
    {
        return B;
    }
    else if(PERCENTAGE>=41&&PERCENTAGE<=60)
    {
        return C;
    }
    else if(PERCENTAGE>=21&&PERCENTAGE<=40)
    {
        return D;
    }
    else
    {
        return E;
    }
}

int main()
{
	char n[80];
	int r;
	double PERCENTAGE,m[5];
	cout<<"Enter the name; followed by rollno; followed by marks\n";
	cin>>n;
	cin>>r;
	for(int y=0; y<5; y++)
	{
		cin>>m[y];
	}
	student s1(n,r,m);
    PERCENTAGE=s1.percentage(m);
	cout<<"\nGrade = "<<s1.grade(PERCENTAGE);
	return 0;
}

