#include <iostream>

#define size 5

using namespace std;

int array_data[size] = {0},array_reference[size],index = 0;

void push(int data,int position)
{
    if(array_reference[position] == -2)
    {
        int a = 0;
        while(array_reference[a] != -1 || a == size)
            a++;
        if(array_reference[a] == -1)
        {
            array_reference[a] = position;
            array_data[position] = data;
            array_reference[position] = -1;
        }
        else
        {
            array_reference[position] = -1;
            array_data[position] = data;
            index = position;
        }
    }
    else
        cout << "\nThe position is occupied !!!\n";
}

void push(int data)
{
    int a = 0, b = 0;
    while(array_reference[a] != -2 || a != size)
        a++;
    if(array_reference[a] == -2)
    {
        while(array_reference[b] != -1 || b != size)
        {
            if(b == size)
            {
                array_reference[a] = -1;
                array_data[a] = data;
                index = a;
            }
            else
            {
                array_reference[b] = a;
                array_reference[a] = -1;
                array_data[a] = data;
            }
        }
    }
    else
        cout<<"\nNo Space left !!!\n";
}

void pop()
{
    int a = 0;
    while(array_reference[a] != -1 || a == size)
    {
        if(a == size)
        {
            cout<<"The list is empty";
            index = 0;
        }

        else
        {
            int b = 0;
            while(array_reference[b] != a || b == size)
                b++;
            if(b == size)
            {
                cout<<array_data[a]<<" ";
                array_reference[a] = -2;
            }
            else
            {
                array_reference[b] = -1;
                cout<<array_data[a]<<" ";
                array_reference[a] = -2;
            }
        }
    }

}

void add_first(int data)
{
    int a = 0, c = 0 ;
    if(array_reference[a] == -2)
    {
        while(array_reference[c] != -1 || c == size)
            c++;
        if(c == size)
        {
            array_reference[a] = -1;
            array_data[a] = data;
            index = a;
        }
        else
        {
            array_reference[c] = a;
            //array_reference[a] = -1;
            array_data[a] = data;
            index = a;
        }
    }
    else
    {
        while(array_reference[a] != -2)
            a++;
        array_data[a] = data;
        array_reference[a] = index;
        index = a;

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
        if(array_reference[index] != -2)
        {
            while(array_reference[a] != -1)
                a++;
            array_data[c] = data;
            array_reference[a] = c;
            array_reference[c] = -1;
        }
        else if(array_reference[index] == -2)
        {
            array_data[index] = data;
            array_reference[index] = -1;
        }
    }
}

void add_sorted(int data)
{
    int b=0, c=0;
    if(array_reference[index] == -2)
    {
        array_data[index] = 0;
        array_reference[index] = -1;
    }
    else if(array_reference[index] != -2)
    {
        while(array_reference[b] != -2 || b == size)
        {
            if(b == size)
                cout<<"Array Full";
            else if(array_reference[b] == -2)
                {
                if(array_reference[index] == -1)
                    {
                    if(array_data[index]<data)
                    {
                        array_data[index+1]=data;
                        array_reference[index] = index+1;
                        array_reference[index+1] = -1;
                    }
                    else if(array_data[index]>data)
                    {
                        int temp_data = array_data[index], temp_reference = array_reference[index];
                        array_data[index] = data;
                        array_reference[index] = index+1;
                        array_data[index+1] = temp_data;
                        array_reference[index+1]=temp_reference;
                    }
                }
                else if(array_reference[index] != -1)
                {
                    while(array_data[c] < data)
                    {
                        c++;
                    }
                    if(array_reference[c] >= data)
                    {
                        int temp_data = array_data[c],temp_reference = array_reference[c];
                        array_data[c]= data;
                        array_reference[c]= b;
                        array_data[b] = temp_data;
                        array_reference[b] = temp_reference;
                    }
                }
            }
        }

    }
}


void print()
{
    int a = index;
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

/*int last_element_address()
{
    int a = 0;
    while(array_reference[a] != -1 || a == size)
        a++;
    if(a == size)
    {
        a = 0;
        return a;
    }
    else
    {
        return a;
    }
}

int first_element_address(int last_address)
{
    int a = 0;
    while(array_reference[a] != last_address || a != size)
        a++;
    if(a == size)
        return last_address;
    else
    {
        first_element_address(a);
    }
    return 0;
}*/

int main()
{
    for(int i = 0 ; i<size ; i++)
        array_reference[i] = -2;
    add_sorted(5);
    add_sorted(4);
    add_sorted(1);
    add_sorted(2);
    add_sorted(3);
    cout<<endl<<array_data[0]<<endl;
    print();
    return 0;
}
