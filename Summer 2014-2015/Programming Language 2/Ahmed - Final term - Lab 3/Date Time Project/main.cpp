#include <iostream>

using namespace std;

class datetime
{
    int day,month,year,hours,minutes,seconds;
public:
    datetime():day(0),month(0),year(0),hours(0),minutes(0),seconds(0){}
    void setvalue(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    void setvalue(int d,int m,int y,int h)
    {
        day=d;
        month=m;
        year=y;
        hours=h;
    }
    void setvalue(int d,int m,int y,int h,int m1)
    {
        day=d;
        month=m;
        year=y;
        hours=h;
        minutes=m1;
    }
    void setvalue(int d,int m,int y,int h,int m1,int s)
    {
        day=d;
        month=m;
        year=y;
        hours=h;
        minutes=m1;
        seconds=s;
    }
    friend ostream& operator<<(ostream& op,const datetime& d1);
};

ostream& operator<<(ostream& op,const datetime& d1)
{
    op<<d1.seconds<<endl<<d1.minutes<<endl<<d1.hours<<endl<<d1.day<<endl<<d1.month<<endl<<d1.year<<endl;
    return op;
}

int main()
{
    datetime d1;
    //d1.setvalue(25,12,2030);
    //d1.setvalue(25,12,2030,12);
    //d1.setvalue(25,12,2030,12,30);
    d1.setvalue(25,12,2030,12,30,54);
    cout<<d1;
    return 0;
}
