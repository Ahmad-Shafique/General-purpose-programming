#include <iostream>

using namespace std;

class student      //Class declaration
{
	char name[80];   //string
	int rollno;
	double marks[5];
public:
	student(char NAME[80],int ROLLNO, double MARKS[5]);     //Constructor Prototype
	double percentage(double MARKS1[5]);
	char grade(double PERCENTAGE);
};

student::student(char NAME[80],int ROLLNO, double MARKS[5])    //Constructor code
{
	name[80]=NAME[80];      //Puts the input " NAME " into private data member " name "
	rollno=ROLLNO;          //Similar to line 17
	marks[5]=MARKS[5];      //Similar to line 17
}

double student::percentage(double MARKS1[5])   //public data member(functions) (" :: " - scope resolution. Used to connect a function to a class)
{
	double PERCENTAGE;
	for(int x=0;x<5;x++)
	{
		PERCENTAGE=PERCENTAGE+MARKS1[x];
	}
	PERCENTAGE/=5;
	cout<<"\nPercentage ="<<PERCENTAGE;
}

char student::grade(double PERCENTAGE)      //Similar to line 23
{
    if(PERCENTAGE>=81.0&&PERCENTAGE<=100.0)
    {
        return 'A';
    }
    else if(PERCENTAGE>=61&&PERCENTAGE<=80)
    {
        return 'B';
    }
    else if(PERCENTAGE>=41&&PERCENTAGE<=60)
    {
        return 'C';
    }
    else if(PERCENTAGE>=21&&PERCENTAGE<=40)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main()
{
	char n[80];
	int r;
	double PERCENTAGE,m[5];
	cout<<"Enter the name; followed by rollno; followed by marks\n";
	cin>>n;     //Input for string containing name
	cin>>r;
	for(int y=0; y<5; y++)
	{
		cin>>m[y];      //Input for grades for different subjects
	}
	student s1(n,r,m);      //Using constructor to create object "s1" with the values which the user entered (line 64,65,68)
    PERCENTAGE=s1.percentage(m);
	cout<<"\nGrade = "<<s1.grade(PERCENTAGE);
	return 0;
}

