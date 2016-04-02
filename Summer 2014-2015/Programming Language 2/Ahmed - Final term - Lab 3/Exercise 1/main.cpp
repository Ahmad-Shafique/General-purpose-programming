#include <iostream>

using namespace std;

class employee{
    protected:
    double sal;
    public:
    employee(double s){sal=s;}
    virtual double payment(){return sal;}
    void prt(){cout<<"Salary = "<<payment()<<endl;}
};

class manager:public employee{
    double inc;
    public:
    manager(double s,double i):employee(s){inc=i;}
    double payment(){return sal*inc;}
};

int main()
{
    employee e1(1500);
    manager m1(1500,1.5);
    cout<<"Exercise about inheritance and polymorphism"<<endl;

    e1.prt();
    cout<<e1.payment()<<endl;
    return 0;
}
