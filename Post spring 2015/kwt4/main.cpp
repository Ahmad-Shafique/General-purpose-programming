#include <iostream>

using namespace std;

class asad
{
private:
    char asad_name[10];
    int asad_size;
    int asad_good_scale;
    int asad_evil_scale;
public:
    friend istream &operator>>(istream &stream , asad &a);
    friend ostream &operator<<(ostream &stream , asad a);

};


istream &operator>>(istream &stream , asad &a)
{
    cout<<"Enter name\nfollowed by size\nfollowed by good and finally evil scale\n";
    stream>>a.asad_name;
    stream>>a.asad_size;
    stream>>a.asad_good_scale;
    stream>>a.asad_evil_scale;
    return stream;
}

ostream &operator<<(ostream &stream , asad a)
{
    stream<<endl<<a.asad_name<<endl<<a.asad_size<<endl<<a.asad_good_scale<<endl<<a.asad_evil_scale<<endl;
    return stream;
}

int main()
{
    asad a;
    cin>>a;
    cout<<a;
    return 0;
}
