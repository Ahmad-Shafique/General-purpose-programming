#include <iostream>
using namespace std;

int FibNumber(int n)
{
    if(n<2 )
        return n;
    else
        return FibNumber(n - 1) + FibNumber(n - 2);
}

int main()
{
    cout << " Enter  Number: ";
    int Init = 0;
    cin >> Init;

    cout << " Fibonacci number is: " << FibNumber(Init) << endl;

    return 0;

}
