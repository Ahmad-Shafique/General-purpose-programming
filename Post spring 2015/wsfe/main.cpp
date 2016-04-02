#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch>='A'&&ch<='Z')
        cout<<"upper case character";
    else if(ch>='a'&&ch<='z')
        cout<<"lower case character";
    else if(ch>='0'&&ch<='9')
        cout<<"it is a digit";
    else
        cout<<"special symbol";
    return 0;
}
