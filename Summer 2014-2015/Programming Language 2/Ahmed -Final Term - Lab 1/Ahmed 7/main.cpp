#include <iostream>
#include <string.h>

using namespace std;

class person
{
private:
    int idnum;
    string lastname;
    string firstname;
public:
    void setfields(int,string,string);
    void outputdata();
};

void person::setfields(int num, string last, string first)
{
    idnum=num;
    lastname=last;
    firstname=first;
}

void person::outputdata()
{
    cout<<"ID#"<<idnum<<"Name :"<<firstname<<" "<<lastname<<endl;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
