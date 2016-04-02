#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;
    srand(time(NULL));
    num = rand()%100;
    int a;
    for(int i=0; ;i++)
    {
        cin>>a;
        if(a>num)
        {
            cout<<"too high";
        }
        if(a<num)
        {
            cout<<"too low";
        }
        if(a==num)
        {
            cout<<"right";
            break;
        }
    }
    return 0;
}
