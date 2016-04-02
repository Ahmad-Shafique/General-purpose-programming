#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("INVENTORY.txt");
    if(!in){
        cout<<"cannot open INVENTORY file";
        return 1;
    }
    char item[20];
    float cost;
    in>>item>>cost;
    cout<<item<<" "<<cost<<"\n";
    in>>item>>cost;
    cout<<item<<" "<<cost<<"\n";
    in>>item>>cost;
    cout<<item<<" "<<cost<<"\n";
    in.close();
    return 0;
}
