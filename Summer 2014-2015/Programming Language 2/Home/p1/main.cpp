#include <iostream>

using namespace std;

class vehicle
{
  int wheels;
  int mileage;
 public:
   vehicle(int w,int m): wheels(w),mileage(m){}

   void show()
   {
       cout<<"Wheels:"<<wheels<<endl;
       cout<<"Mileage"<<mileage<<endl;
   }



};
class car:public vehicle
{
   int passengers;

  public:
   car(int w,int m,int p):vehicle(w,m),passengers(p){}
   void show()
   {
     vehicle::show();
     cout<<"Passengers"<<passengers<<endl;

   }


};

class truck:public vehicle
{
  int loadilimit;

  public:
   truck(int w,int m,int t):vehicle(w,m),loadilimit(t){}

  void show()
   {
     vehicle::show();
     cout<<"Loadlimit"<<loadilimit<<endl;

   }

};

int main()
{
    car CAR(9,5,10);
    truck TRUCK(2,3,5000);
    cout<<"CAR:"<<endl;
    CAR.show();
    cout<<"TRUCK"<<endl;
    TRUCK.show();
    return 0;
}

