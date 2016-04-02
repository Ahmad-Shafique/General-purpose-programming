#include<iostream>
using namespace std;

class Stack
{
    int size;
    int *stk;
    int i;
public:
    Stack(){i=0; size = 5; stk = new int[5]; }
    Stack(int s){i=0; size = s; stk = new int[size]; }//can't understand stk=new int[5];
    ~Stack(){ delete [] stk; cout<<"destructor \n";}
    void push(int data);
    int pop();
};
void Stack::push(int data)
{
    if(i == size)     {
        cout<<"Stack Full\n";
    }else {
        stk[i] = data; i++;
    }
}
int Stack::pop()
{
    if(i==0) {
        cout<<"Stack Empty\n"; return -1;
    }else     {
        i--;
        return stk[i];
    }

}
int main()
{
    Stack s, s1(8);

    s1.push(1); s1.push(4);
    s1.push(3); s1.push(43);
    s1.push(12);s1.push(4);
    s1.push(12);s1.push(4);
    s1.push(12);s1.push(4);
    s1.push(12);

    //cout<<s.pop()<<"\n";
    //cout<<s.pop()<<"\n";
//    cout<<s.pop()<<"\n";
    //s.push(3); s.push(43);
//    s.push(12);

}
