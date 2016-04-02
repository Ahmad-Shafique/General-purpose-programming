#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class employee{
public:
    char name[40];
    int age;
    double salary;
public:
    employee(){}
    employee(char *n,int a,double s){
        strcpy(name,n);
        age=a;
        salary=s;
    }
};

int main()
{
    employee e1("Ahmed",40,1000.0);
    ofstream ofs("employeefile",ios::binary);
    if(!ofs){
        cout<<"Cannot open file \n";
        return 1;
    }
    ofs.write((char *)&e1,sizeof(e1));
    ofs.close();
    return 0;
}
