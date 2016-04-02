#ifndef regpost_h
#define regpost_h

class post{
    char *name;
    char *to;
    float stampcost;
public:
    post():stampcost(0){name=new char;to= new char;to=NULL;}
    void read(){cout<<"Enter name, postal address and stampcost";cin>>name>>to>>stampcost;}
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

#endif

