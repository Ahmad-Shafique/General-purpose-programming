#ifndef useful_h
#define useful_h

class vehicle
{
    int wheels;
    int mileage;
public:
    vehicle(int wh,int ml){wheels=wh;mileage=ml;show()}
    void show(){cout<<"No. of wheels = "<<wheels<<"\n"<<"Distance travelled = "<<mileage<<endl;}
}

#endif
