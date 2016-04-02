#include <iostream>
#include <cstring>

#define NUM_EMPLOYEES 6

using namespace std;

/*class employee{
    char name[20];
public:
    employee(char *n){strcpy(name,n);}
    virtual char *getname(){return name;}
    virtual void show_info(){
        cout<<name<<" - Employee"<<endl;
    }
};

class manager :public employee{
public:
    manager(char *n):employee(n){}
    virtual char *getname(){return employee::getname();}
    virtual void show_info(){
        cout<<getname()<<" - Manager"<<endl;
    }
};

class worker :public employee{
public:
    worker(char *n):employee(n){}
    virtual char *getname(){return employee::getname();}
    virtual void show_info(){
        cout<<getname()<<" - worker"<<endl;
    }
};

class officer:public worker{
public:
    officer(char *n):worker(n){}
    char *getname(){return worker::getname();}
    void show_info(){
        cout<<getname()<<" - Officer"<<endl;
    }
};

class technician:public worker{
public:
    technician(char *n):worker(n){}
    char *getname(){return worker::getname();}
    void show_info(){
        cout<<getname()<<" - Officer"<<endl;
    }
};*/

class employee{
    char name[20];
    long int salary;
public:
    employee(char *n,long int s){strcpy(name,n);salary =s;}
    virtual char *getname(){return name;}
    virtual void show_info(){
        cout<<name<<'-'<<salary<<" - Employee";
    }
};

class manager :public employee{
protected:
    char *degree;
public:
    manager(char *n,long int s, char *d):employee(n,s),degree(d){}
    virtual char *getname(){return employee::getname();}
    virtual void show_info(){
        employee::show_info();
        cout<<" - "<<degree<<" - Manager"<<endl;
    }
};

class worker :public employee{
protected:
    char *position;
public:
    worker(char *n,long int s,char *p):employee(n,s),position(p){}
    virtual char *getname(){return employee::getname();}
    virtual void show_info(){
        employee::show_info();
        cout<<" - "<<position<<" - Worker";
    }
};

class officer:public worker{
public:
    officer(char *n,long int s,char *p):worker(n,s,p){}
    char *getname(){return worker::getname();}
    void show_info(){
        worker::show_info();
        cout<<" - Officer"<<endl;
    }
};

class technician:public worker{
public:
    technician(char *n,long int s,char *p):worker(n,s,p){}
    char *getname(){return worker::getname();}
    void show_info(){
        worker::show_info();
        cout<<" - Technician"<<endl;
    }
};


int main()
{
    /*employee rafa("Rafa");
    manager mario("Mario");
    worker anton("Anton");
    officer luis("Luis");
    technician pablo("Pablo");

    employee *pe;
    cout<<endl<<"Inheritance and polymorphism :\n"<<endl;
    pe = &rafa; pe->show_info();
    pe = &mario; pe->show_info();
    pe = &anton; pe->show_info();
    pe = &luis; pe->show_info();
    pe = &pablo; pe->show_info();

    cout<<endl<<"Ya he terminado"<<endl;*/

    employee* employeelist[NUM_EMPLOYEES];

    employeelist[0] = new manager("Carla Garcia" , 35000, "Economist");
    employeelist[1] = new manager("Juan perez" , 38000, "Engineer") ;
    employeelist[2] = new officer("Pedro Egia" , 18000, "Officer 1") ;
    employeelist[3] = new officer("Luisa Penia" , 15000, "Officer 2") ;
    employeelist[4] = new technician("Javier Ramos", 19500, "Welder") ;
    employeelist[5] = new technician("Amaia Bilbao", 12000, "Electrician") ;

    for(int i=0;i<NUM_EMPLOYEES;i++)
        employeelist[i]->show_info();
    return 0;
}
