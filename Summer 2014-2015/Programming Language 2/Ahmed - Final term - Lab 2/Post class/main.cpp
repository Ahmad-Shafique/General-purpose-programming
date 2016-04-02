#include <iostream>

using namespace std;

class post{
    char name[80];
    char *to;
    float stampcost;
public:
    post():stampcost(0),to("NULL"){}
    void read(){cout<<"Enter name, postal address and stampcost"<<endl; to = new char;
    cin>>name;
    cin>>to;
    cin>>stampcost;}
    void print(){cout<<name<<endl<<to<<endl<<stampcost<<endl;}
    float totalcost(){return stampcost;}
};

class registeredpost:public post{
    float weight;
    float registration_cost;
public:
    registeredpost():weight(20),registration_cost(10){}
    void read(){post::read();cout<<"Enter weight and registration cost"<<endl;cin>>weight>>registration_cost;}
    void print(){post::print();cout<<weight<<endl<<registration_cost<<endl;}
    float totalcost(){return (post::totalcost()+registration_cost);}
};

class Insured_Registered_post : public registeredpost{
    float amtinsured;
public:
    Insured_Registered_post():amtinsured(20){}
    void read(){registeredpost::read();cout<<"Enter The amount of insurance on this post"<<endl;cin>>amtinsured;}
    void print(){registeredpost::print();cout<<amtinsured<<endl;}
    float totalcost(){return (registeredpost::totalcost()+amtinsured);}
};

int main()
{
    Insured_Registered_post envelope;
    envelope.read();
    cout<<"Post details...";
    envelope.print();
    return 0;
}
