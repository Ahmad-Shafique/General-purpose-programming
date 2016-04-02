#include <iostream>

using namespace std;

struct node
{
    int data;
    node* previous;
    node* next;
};

node* root = NULL;

void addfirst(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    newnode->previous = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        node* t = root;
        while(t->previous != NULL)
        {
            t = t->previous;
        }
        newnode->next = t;
        newnode->previous = NULL;
        t->previous = newnode;
    }
}

void addlast(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    newnode->previous = NULL;

	if(root == NULL)
	{
		root = newnode;
	}
	else
	{
		node* t = root;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = newnode;
		newnode->previous = t;
	}
}

void addsorted(int value)
{
	node* newnode = new node;
	newnode->data = value;
	newnode->next = NULL;
	newnode->previous = NULL;

	if(root == NULL)
	{
		root = newnode;
	}
	else if(value < root->data)
	{
		addfirst(value);
	}
	else
	{
		node* t = root;
		while(t->previous != NULL )
		{
			t = t->previous;
		}
		while(t->next != NULL && t->next->data < value)
		{
		    t = t->next;
		}

		if(t->next == NULL)
		{
			t->next = newnode;
			newnode->previous = t;
		}
		else
		{
			newnode->next = t->next;
			t->next->previous = newnode;
			t->next = newnode;
			newnode->previous = t;
		}
	}
}

void print()
{
	cout << "Current Link: ";
	node* t = root;
	while(t->previous != NULL)
	{
	    t = t->previous;
	}
	while(t != NULL)
	{
		cout << t->data << " -> ";
		t = t->next;
	}
	cout << endl;
	cout<< "Root is "<<root->data<<endl;
}

int main()
{
    addsorted(6);
    addsorted(7);
    addsorted(3);
    addsorted(2);
    /*addfirst(6);
    addfirst(7);
    addfirst(3);
    addfirst(2);
    addlast(6);
    addlast(7);
    addlast(3);
    addlast(2);*/
    print();
    return 0;
}
