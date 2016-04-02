#include <iostream>

using namespace std;

const int size=50;
char s[size];
int p1=0,p2=0;

void push()
{
    p1++;
}

void pop()
{
    p2++;
}

void check()
{
    for(int i=0;i<=size;i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
            push();
        else if(s[i]==']'||s[i]=='}'||s[i]==')')
            pop();
    }
    if(p1==p2)
        cout<<"\n\nThe equation is valid\n";
    else
        cout<<"\n\nThe equation is invalid\n";
}


int main()
{
    cin>>s;
    check();
    return 0;
}
