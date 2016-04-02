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


    /*employee* employeelist[NUM_EMPLOYEES];

    employeelist[0] = new manager("Carla Garcia" , 35000, "Economist");
    employeelist[1] = new manager("Juan perez" , 38000, "Engineer") ;
    employeelist[2] = new officer("Pedro Egia" , 18000, "Officer 1") ;
    employeelist[3] = new officer("Luisa Penia" , 15000, "Officer 2") ;
    employeelist[4] = new technician("Javier Ramos", 19500, "Welder") ;
    employeelist[5] = new technician("Amaia Bilbao", 12000, "Electrician") ;

    for(int i=0;i<NUM_EMPLOYEES;i++)
        employeelist[i]->show_info();*/


    char *c1,*c2;
    int n,i,j;
    c1=new char;
    c2=new char;
    long int s;
    cout<<"How many employees would you like to create : ";
    cin>>n;
    employee* employeelist[n];

    for(i=0;i<n;i++)
    {
        cout<<"\nFor employee number "<<i+1<<" , Enter name "<<endl;
        cin>>c1;
        cout<<"Enter the salary : ";
        cin>>s;
        cout<<"Enter the relevant degree/position : \n";
        cin>>c2;
        cout<<"What kind of employee is it ? Press\n1 for manager\n2 for officer\n3 for technician\n";
        cin>>j;
        if(j==1)
        {
            new manager(c1,s,c2);
        }
        else if(j==2)
        {
            new officer(c1,s,c2);
        }
        else
        {
            new technician(c1,s,c2);
        }
    }
    cout<<"Here are the data you entered :\n";
    for(i=0;i<n;i++)
        employeelist[i]->show_info();
    cout<<"Enter the name of the employee you are looking for :"<<endl;
    cin>>c1;
    for(i=0,j=0;i<n;i++)
    {
        if(strcmp(employeelist[i]->getname(),c1)==0);
        {
            cout<<"This name and record exists in database \n";
            j=1;
            break;
        }
    }
    if(j!=0)
    {
        cout<<"This record does not exist in the database"<<endl;
    }
    return 0;
}
