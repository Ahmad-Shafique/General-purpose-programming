#include <iostream>

#define size 5

using namespace std;

int array_data[size] = {0},array_reference[size],root;

void add_first(int data)
{
    if(array_reference[root] == -2)
    {
        array_data[root] = data;
        array_reference[root] = -1;
        cout<<"Added "<<data<<" at the beginning"<<endl;
    }
    else
    {
        int c=0;
        while(array_reference[c] != -2 || c == size)
        {
            c++;
        }
        if(c == size)
        {
            cout<<"No Space left";
        }
        else
        {
            /*int temp_data = array_data[root];
            int temp_reference = array_reference[root];*/
            cout<<"Added "<<data<<" at the beginning"<<endl;
            array_data[c] = data;
            array_reference[c] = root;
            root = c;
        }
    }
}

void add_last(int data)
{
    int a = 0, c = 0;
    while(array_reference[c] != -2 || c == size)
        c++;
    if(c == size)
    {
        cout<<endl<<"No empty space"<<endl;
    }
    else if(array_reference[c] == -2)
    {
        if(array_reference[root] != -2)
        {
            while(array_reference[a] != -1)
                a++;
            array_data[c] = data;
            array_reference[a] = c;
            array_reference[c] = -1;
            cout<<"Added "<<data<<" at the end"<<endl;
        }
        else if(array_reference[root] == -2)
        {
            array_data[root] = data;
            array_reference[root] = -1;
            cout<<"Added "<<data<<" at the end"<<endl;
        }
    }
}

void add_sorted(int data)
{
    int a=root , c=0 ;
    if(array_reference[root] == -2)
    {
        array_data[root] = data;
        array_reference[root] = -1;
        cout<<"Added "<<data<<" after sorting"<<endl;
    }
    else
    {
        while(array_reference[c] != -2 || c==size)
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
            while(array_reference[a] != -1)
            {
                if(array_data[array_reference[a]] >= data)
                {
                    b = a;
                }
                if(array_data[a] >= data)
                {
                    break;
                }
                a = array_reference[a];
            }
            if(array_data[root] > data)
            {
                array_data[c] = data;
                array_reference[c] = root;
                root = c;
                cout<<"Added "<<data<<" after sorting"<<endl;
            }
            else if(array_reference[a] == -1)
            {
                array_data[c] = data;
                array_reference[c] = -1;
                array_reference[a] = c;
                cout<<"Added "<<data<<" after sorting"<<endl;
            }
            else if(array_data[a] >= data)
            {
                array_data[c] = data;
                array_reference[c] = array_reference[b];
                array_reference[b] = c;
                cout<<"Added "<<data<<" after sorting"<<endl;
            }
        }
    }
}

void remove_first()
{
    if(array_reference[root] == -2)
    {
        cout<<"The list is empty !!"<<endl;
    }
    else
    {
        int a = root;
        root = array_reference[root];
        cout<<array_data[a]<<" removed"<<endl;
        array_data[a] = NULL;
        array_reference[a] = -2;
    }
}

void remove_last()
{
    if(array_reference[root] == -2)
    {
        cout<<"The list is empty !!"<<endl;
    }
    else
    {
        int c = root , a = 0;
        while(array_reference[c] != -1)
        {
            if(array_reference[array_reference[c] == -1])
            {
                a = c;
            }
            c = array_reference[c];
        }
        cout<<array_data[c]<<" removed"<<endl;
        array_data[c] = NULL;
        array_reference[c] = -2;
        array_reference[a] = -1;
    }
}

void remove_value(int data)
{
    if(array_reference[root] == -2)
    {
        cout<<endl<< "List is empty !!"<<endl;
    }
    else
    {
        int a = root, c=0;
        while(array_data[a] != data || array_reference[a] == -1)
        {
            if(array_data[array_reference[a]] == data)
            {
                c = a;
            }
            a=array_reference[a];
        }
        if(array_reference[a] != -1)
        {
            array_reference[c] = array_reference[a];
        }
        cout<<array_data[a]<<" removed"<<endl;
        array_data[a] = NULL;
        array_reference[a] = -1;
    }
}

void print()
{
    int a = root;
    if(array_reference[a] == -1)
        cout<<array_data[a];
    else
    {
        while(array_reference[a] != -1)
        {
            cout << array_data[a]<<"->";
            a = array_reference[a] ;
        }
        cout << array_data[a] <<endl;
    }
}

int main()
{
    for(int i = 0 ; i<size ; i++)
    {
        array_reference[i] = -2;
    }
    add_first(4);
    add_first(3);
    add_first(2);
    add_first(1);
    add_sorted(1);

    /*add_first(4);
    add_first(3);
    remove_first();
    add_first(2);
    add_first(1);
    remove_first();

    add_last(1);
    add_last(2);
    add_last(3);
    add_last(4);
    add_last(5);

    add_last(1);
    add_last(2);
    remove_last();
    add_last(3);
    add_last(4);
    remove_last();
    add_last(5);

    add_sorted(3);
    add_sorted(2);
    add_sorted(1);
    add_sorted(4);
    add_sorted(5);

    add_sorted(3);
    add_sorted(2);
    add_sorted(1);
    add_sorted(4);
    add_sorted(5);
    remove_value(3);
    remove_value(2);*/

    print();
    return 0;
}

