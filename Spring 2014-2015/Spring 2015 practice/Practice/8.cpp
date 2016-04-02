#include <iostream>

using namespace std;

int main()
{
    double x = 10.556487544541;
    cout.precision(12);
    cout.width(20);
    cout.fill('x');
    cout<<x;
}
