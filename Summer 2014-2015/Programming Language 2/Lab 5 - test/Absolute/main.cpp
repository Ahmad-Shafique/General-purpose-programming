#include <iostream>

using namespace std;

int choice(){
    int choice;
    cout<<"Press\n1 for float\n2 for double\n3 for integer\n";
    cin>>choice;
    if(choice==1){
        float x;
        cin>>x;
        cout<<x<<"\n";
        return int(x);
    }
    else if(choice==2){
        double y;
        cin>>y;
        cout<<y<<"\n";
        return int(y);
    }
    else{
        int z;
        cin>>z;
        cout<<z<<"\n";
        return z;
    }
}
void absolute(int x){
    cout<<"Absolute value of your number is : "<<x<<"\n";
}

int main()
{
    absolute(choice());
    return 0;
}
