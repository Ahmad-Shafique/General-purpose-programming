#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* root = NULL;

void push_last(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        node* t = root;
        while(t->next != NULL && t->next->data < value)
        {
            t = t->next;
        }
        t->next = newnode;
        if(t->next = NULL)
        {
            push_last(value);
        }
        else
        {
            newnode->next = t->next;
            t->next = newnode;
        }
    }
}

void push_first(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        newnode->next = root;
        root = newnode;
    }
}

void push_sorted(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else if(value < root->data)
    {
        push_first(value);
    }
    else
    {
        node* t = root;
        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = newnode;
    }
}


void print()
{
    node *t = root;
    while(t != NULL)
    {
        cout << t->data << " -> ";
        t = t->next;
    }
}

void deletefirst()
{
    if(root == NULL)
    {
        cout<<"Link is empty"<<endl;
    }
    else
    {
        root = root->next;
    }
}

void deletelast()
{
    if(root == NULL)
    {
        cout<<"Link is empty"<<endl;
    }
    else if(root ->next == NULL)
    {
        root = NULL;
    }
    else
    {
        node *t = root;
        while(t->next->next != NULL)
        {
            t = t->next;
        }
        t->next = NULL;
    }
}

void deletesorted(int value)
{
    if(root == NULL)
    {
        cout<<"Link is empty"<<endl;
    }
    else if(value == root->data)
    {
        deletefirst();
    }
    else
    {
        node *t = root;
        while(t->next != NULL && t->next->data != value)
        {
            t = t->next;
        }
        if(t->next == NULL)
        {
            cout << "Value not found" <<endl;
        }
        else
        {
            t->next = t->next->next;
        }
    }
}



int main()
{
    return 0;
}
