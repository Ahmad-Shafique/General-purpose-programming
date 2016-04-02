#include <iostream>
#include <cstring>

using namespace std;

class employee{
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
};


int main()
{
    employee rafa("Rafa");
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

    cout<<endl<<"Ya he terminado"<<endl;
    return 0;
}
