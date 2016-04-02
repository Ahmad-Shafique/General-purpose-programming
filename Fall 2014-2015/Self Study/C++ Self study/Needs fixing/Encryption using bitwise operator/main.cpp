#include <iostream>
#include <string>

using namespace std;

void encryption();
int choice(int value);
//void decryption();
string dat();
void print(string s);


int main()
{
    cout<<"Welcome to Encryption-Decryption simulation with the value 500";
    choice(0);
    return 0;
}

void encryption()
{
    int y = choice(1);
    string data = dat();
    if(y==1)
    {
        data = data & 500;
    }
    else if(y==2)
    {
        data = data | 500;
    }
    else if(y==3)
    {
        data = data ^ 500;
    }
    else
    {
        data = ~ data;
    }
    print(data);
}

int choice(int value)
{
    int x;
    if(value==0)
    {
        cout<<"Press\n1 to encrypt\n2 to decrypt";
        cin>>x;
        if(x==1)
        {
            encryption();
        }
        /*else if(x==2)
        {
            decryption();
        }*/

    }
    else if(value==1) //Use file here
    {
        cout<<"Which operation would you like to use ?\n";
        cout<<"Press\n1 for AND\n2 for OR\n3 for Exclusive OR\n4 for One's complement\n";
        cin>>x;
        return x;
    }
}

/*void decryption()
{
    int y = choice(1);
    string data = dat();
    if(y==1)
    {

    }
    else if(y==2)
    {

    }
    else if(y==3)
    {

    }
    else
    {

    }
    print(data);
}*/

string dat()
{
    string s;
    cout<<"Please Enter your data \n"
    cin>>s;
    return s;
}

void print(string s)
{
    cout<<"Your encrypted data is :\n"<<s<<endl;
}
