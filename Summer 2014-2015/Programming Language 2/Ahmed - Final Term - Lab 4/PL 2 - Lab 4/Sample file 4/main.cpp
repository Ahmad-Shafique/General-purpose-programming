#include <iostream>
#include <fstream>

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
    employee e2;
    ifstream ifs("employeefile",ios::binary);
    if(!ifs){
        cout<<"Cannot open file \n";
        return 1;
    }
    ifs.read((char *)&e2,sizeof(e2));
    cout<<"Employee Information\n";
    cout<<"Name : "<<
    return 0;
}
