#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    char x;
    cout << typeid(x).name();
    return 0;
}
