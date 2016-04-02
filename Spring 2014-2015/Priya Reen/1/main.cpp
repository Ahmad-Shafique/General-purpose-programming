#include <iostream>
using namespace std;
 int main()
 {
     int number, remainder;
     cin>>number;
      remainder = number % 2;
     if(remainder == 0)
        { cout<<"The number is even\n";
     } else
     { cout<<"The number is odd\n"<<endl;
     }
 }
