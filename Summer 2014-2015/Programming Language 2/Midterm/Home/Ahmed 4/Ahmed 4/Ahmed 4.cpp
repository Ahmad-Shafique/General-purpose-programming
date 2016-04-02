// Ahmed 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

class Student
{
	char *Name;
	int Rollno;
	double Marks[5];
	float percentage;
	Student(char *name, int rollno,double marks);

public:
	
};

Student::Student(char *name, int rollno,double marks[5])
	{
		int x;
		Name=name;
		Rollno=rollno;
		for(x=0;x<5;x++)
		{
			Marks[x]=marks[x];
		}
	}

int main()
{
	char *N;
	return 0;
}

