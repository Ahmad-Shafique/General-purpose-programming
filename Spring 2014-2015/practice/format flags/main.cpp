#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::showpos);
    cout<<100<<endl;;
    cout.setf(ios::showpoint);
    float k = 45.4541577;
    cout<<k<<endl;
    cout.unsetf(ios::showpos);
    cout<<100<<endl;

    cout.setf(ios::scientific);
    cout<<100.12<<endl;
    cout.setf(ios::uppercase);
    cout<<100.12<<endl;
    //illegit call - cout.unsetf(ios::scientific,ios::uppercase,ios::showpoint)
    cout.unsetf(ios::scientific);
    cout.unsetf(ios::uppercase);
    cout.unsetf(ios::showpoint);
    cout<<100.15<<endl;
    cout.setf(ios::hex); // Doesn't show the required hex output
    cout<<100<<endl;
    cout.setf(ios::hex,ios::basefield);
    cout<<100<<endl;
    /*//setting many flags together - Didn't work
    long f = ios::showpos | ios::showbase | ios::oct | ios::right;
    cout.flags(f);*/
    double f=10.54548745451;
    cout<<f<<endl;
    cout.precision(10);
    cout<<f<<endl;
    cout.width(15);
    cout.fill('*');
    cout<<f<<endl;
    cout<<f<<endl;
    return 0;
}
