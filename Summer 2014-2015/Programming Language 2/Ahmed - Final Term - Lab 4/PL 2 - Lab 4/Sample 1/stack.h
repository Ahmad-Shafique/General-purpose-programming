#ifndef stack_h
#define stack_h

const int size=10;

template<typename dtype>
class stack{
    dtype stck[size];
    int tos;
public:
    stack(){tos=0;}
    void push(dtype ob);
    dtype pop();
};

template<typename dtype>void stack<dtype>::push(dtype ob)
{
    if(tos==size){
        cout<<"Stack is full";
        return 0;
    }
    stck[tos]=ob;
    tos++;
}

template<typename dtype>dtype stack<dtype>::pop()
{
    if(tos==0){
        cout<<"Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
#endif
