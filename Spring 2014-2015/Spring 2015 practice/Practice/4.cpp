#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class a{
private:
    int one;
public:
    a(){one = 0;}
    a(int x);
    void print_a(){cout<<one<<endl;}
};

class b{
private:
    int two;
public:
    b(){two = 0;}
    b(int x){two = x;}
    void print_b(){cout<<two<<endl;}
};

a::a(int x)
{
    one = x;
}

int main()
{
    a a1(10);
    b b1(5);
    b1.print_b();
}

