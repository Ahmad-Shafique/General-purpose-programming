#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int num;
    num = (rand()%90)+10;
    cout<<num;
    return 0;
}
