#include <iostream>

using namespace std;

class a
{
    private:
        int val;
    public:
        a(int x){val=x;}
        int accessval(){return val;}
};

class b : public a
{
private:
    int prc;
public :
    b(int x, int y):a(x){prc = y;}
    void show(){cout<<prc<<" "<<accessval();}
};

int main()
{
    b x(10,20);
    x.show();
    return 0;
}
