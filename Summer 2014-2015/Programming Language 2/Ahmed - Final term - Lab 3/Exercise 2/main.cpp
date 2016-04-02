#include <iostream>

using namespace std;

class employee{
    char name[20];
    public:
    virtual void show_info(){cout<<"Employee"<<endl;}
    employee(char *n){strcpy(name,n);}
    char *getname(){return name;}
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
