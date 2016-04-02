#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int studentage;
    cout<<"Student Age :";
    cin>>studentage;
    try{
        if(studentage<0)
            throw logic_error("Invalid Age");
        cout<<"\n student age : "<<studentage<<endl;
    }
    catch(logic_error& e){
        cout<<e.what()<<endl;
    }
    return 0;
}
