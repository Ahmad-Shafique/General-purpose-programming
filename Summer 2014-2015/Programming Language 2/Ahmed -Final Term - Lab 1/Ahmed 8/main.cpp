#include <iostream>

using namespace std;

class vehicle
{
    int wheels;
    int mileage;
public:
    vehicle(int wh,int ml):wheels(wh),mileage(ml){}
    void show(){cout<<"No. of wheels = "<<wheels<<"\n"<<"Distance travelled = "<<mileage<<endl;}
};

class car:public vehicle
{
    //vehicle v1;
    int passengers;
public:
    car(int wh,int ml,int pas):vehicle(wh,ml),passengers(pas){cout<<"\nCar :"<<endl;}
    void show()
    {
        //v1.show();
        vehicle::show();
        cout<<"Number of passengers ="<<passengers<<endl;
    }

};

class truck
{
    vehicle v1;
    int loadlimit;
public:
    truck(int wh,int ml,int lo):v1(wh,ml),loadlimit(lo){cout<<"\nTruck :"<<endl;}
    void show()
    {
        v1.show();
        cout<<"Number of passengers ="<<loadlimit<<endl;
    }

};

int main()
{
    car c1(4,301,2);
    c1.show();
    truck t1(4,1500,250);
    t1.show();

    return 0;
}
