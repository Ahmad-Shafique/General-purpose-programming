#include <iostream>

#define size 10

using namespace std;

int a_d[size] = {0},a_nxt[size],root;

void initializer()
{
    for(int i = 0 ; i<size ; i++)
    {
                a_nxt[i] = -2;
    }
}

void add_first(int input){
    if(a_nxt[root] == -2)
    {
        a_d[root] = input;
        a_nxt[root] = -1;
    }
    else
    {
        int c=0;
        while(a_nxt[c] != -2 || c == size)
        {
            c++;
        }
        if(c == size)
        {
            cout<<"No Space left";
        }
        else
        {
            a_d[c] = input;
            a_nxt[c] = root;
            root = c;
        }
    }
}

void add_last(int input){
    int a = 0, c = 0;
    while(a_nxt[c] != -2 || c == size)
        c++;
    if(c == size)
    {
        cout<<endl<<"No empty space"<<endl;
    }
    else if(a_nxt[c] == -2)
    {
        if(a_nxt[root] != -2)
        {
            while(a_nxt[a] != -1)
                a++;
            a_d[c] = input;
            a_nxt[a] = c;
            a_nxt[c] = -1;
        }
        else if(a_nxt[root] == -2)
        {
            a_d[root] = input;
            a_nxt[root] = -1;
        }
    }
}

void add_sorted(int input){
    int a=root , c=0 ;
    if(a_nxt[root] == -2)
    {
        a_d[root] = input;
        a_nxt[root] = -1;
    }
    else
    {
        while(a_nxt[c] != -2 || c==size)
        {
            c++;
        }
        if(c == size)
        {
            cout<<"No Space Left";
        }
        else
        {
            int b = 0;
            while(a_nxt[a] != -1 )
            {
                if(a_d[a_nxt[a]] >= input)
                {
                    b = a;
                }
                if(a_d[a] >= input)
                {
                    break;
                }
                a = a_nxt[a];
            }
            if(a_nxt[a] == -1)
            {
                a_d[c] = input;
                a_nxt[c] = -1;
                a_nxt[a] = c;
            }
            else if(a_d[a] >= input)
            {
                a_d[c] = input;
                a_nxt[c] = a_nxt[b];
                a_nxt[b] = c;
            }
        }
    }
}

void remove_first(){
    if(a_nxt[root] == -2)
    {
        cout<<"The list is empty !!"<<endl;
    }
    else
    {
        int a = root;
        root = a_nxt[root];
        cout<<a_d[a]<<" removed"<<endl;
        a_d[a] = NULL;
        a_nxt[a] = -2;
    }
}

void remove_last()
{
    if(a_nxt[root] == -2)
    {
        cout<<"The list is empty !!"<<endl;
    }
    else
    {
        int c = root , a = 0;
        while(a_nxt[c] != -1)
        {
            if(a_nxt[a_nxt[c] == -1])
            {
                a = c;
            }
            c = a_nxt[c];
        }
        cout<<a_d[c]<<" removed"<<endl;
        a_d[c] = NULL;
        a_nxt[c] = -2;
        a_nxt[a] = -1;
    }
}

void remove_sorted(int input){
    if(a_nxt[root] == -2)
    {
        cout<<endl<< "List is empty !!"<<endl;
    }
    else
    {
        int a = root, c=0;
        while(a_d[a] != input || a_nxt[a] == -1)
        {
            if(a_d[a_nxt[a]] == input)
            {
                c = a;
            }
            a=a_nxt[a];
        }
        if(a_nxt[a] != -1)
        {
            a_nxt[c] = a_nxt[a];
        }
        cout<<a_d[a]<<" removed"<<endl;
        a_d[a] = NULL;
        a_nxt[a] = -1;
    }
}

void print(){
    int a = root;
    if(a_nxt[a] == -1)
        cout<<a_d[a];
    else
    {
        while(a_nxt[a] != -1)
        {
            cout << a_d[a]<<"->";
            a = a_nxt[a] ;
        }
        cout << a_d[a] <<endl;
    }
}

int main()
{
    initializer();
    add_first(4);
    add_first(3);
    add_first(2);
    add_first(1);
    add_sorted(2);
    print();
    return 0;
}

