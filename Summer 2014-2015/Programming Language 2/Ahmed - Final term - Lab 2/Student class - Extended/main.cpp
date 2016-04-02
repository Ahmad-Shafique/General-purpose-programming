#include <iostream>

using namespace std;

class student{
    char *name;
    int rollno;
    double marks[5];
    float percentage;
public:
    student(){name=new char;cout<<"Enter name , followed by roll number, followed by marks"<<endl;
    cin>>name;
    cin>>rollno;
              for(int i=0;i<5;i++)
                cin>>marks[i];
             }
    void calculatepercentage();
    float grade(){calculatepercentage(); return percentage;}
};

void student::calculatepercentage()
{
    for(int i=0;i<5;i++)
    {
        percentage+=marks[i];
    }
    percentage=(percentage/500)*100;
}

class sciencestudent:public student{
    double practicalmarks;
    float percentage;
public:
    sciencestudent(){cout<<"Enter marks in practical course"<<endl; cin>>practicalmarks;}
    void calculatepercentage(){percentage=((((student::grade()/100)*500)+practicalmarks)/650)*100;}
    float grade(){calculatepercentage(); return percentage;}
};

class artstudent:public student{
    double optionalcourse;
    float percentage;
public:
    artstudent(double oc):optionalcourse(oc){}
    void calculatepercentage(){percentage=((((student::grade()/100)*500)+optionalcourse)/600)*100;}
    float grade(){calculatepercentage(); return percentage;}
};

int main()
{
    sciencestudent s1;
    cout<<"percentage = "<<s1.grade()<<endl;
    return 0;
}
