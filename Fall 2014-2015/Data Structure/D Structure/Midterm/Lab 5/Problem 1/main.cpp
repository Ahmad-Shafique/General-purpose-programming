#include <iostream>

using namespace std;

struct node
{
    int data;
    node* previous;
    node* next;
};

node* root = NULL;
node* tail = NULL;

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
		tail=newnode;
		t->next = tail;
		tail->previous = t;
		tail->next = NULL;
	}
}

void print()
{
	cout << "Current Link: ";
	node* t = root;
	while(t != NULL)
	{
		cout << t->data << " -> ";
		t = t->next;
	}
	cout << "\n\n\n";
}

void search(int value)
{
    node* t1 = root;
    int p1=1,p2=1;
    node* t2 = tail;
    for(;;)
    {
        if((t1->data == value)||(t2->data == value))
        {
            cout << "Data (" <<value<<") FOUND in the linked list\n";
            if(t1 -> data == value)
            {
                cout << "Found at " << p1 << " position from the beginning\n\n";
            }
            else if(t2 -> data == value)
            {
                cout << "Found at " << p2 << " position from the end\n\n";
            }
            break;
        }
        else if((t1->next == t2->previous)||t1 == t2)
        {
            cout<< "Data (" <<value<<") NOT FOUND in linked list\n\n";
            break;
        }
        t1 = t1->next;
        t2 = t2->previous;
        p1++;
        p2++;
    }
}

int main()
{
    addlast(6);
    addlast(7);
    addlast(3);
    addlast(2);
    print();
    search(3);
    return 0;
}
