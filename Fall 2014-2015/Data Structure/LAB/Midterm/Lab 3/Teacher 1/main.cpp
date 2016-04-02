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



int main()
{
    push_last(5);
    push_last(9);
    push_last(6);
    push_last(1);
    push_last(2);
    push_last(3);
    push_first(5);
    push_first(9);
    push_first(6);
    push_first(1);
    push_first(2);
    push_first(3);
    push_sorted(5);
    push_sorted(8);
    push_sorted(7);
    push_sorted(6);
    print();
    return 0;
}
