#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
}

node* root=NULL;

void add_last(int value)
{
    node* temp=new node;
    temp->data;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        node* t=root;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=temp;
    }
}

void print()
{
    node* t=root;
    while(t!=NULL)
    {
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<endl;
}

int main()
{
    add_last(5);
    add_last(9);
    add_last(3);
    add_last(6);
    add_last(8);
    add_last(7);
    print();
    return 0;
}
