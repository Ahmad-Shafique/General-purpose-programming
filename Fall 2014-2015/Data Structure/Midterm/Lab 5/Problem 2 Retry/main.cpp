#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* ROOT = NULL;

void AddLast(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = NULL;

	if(ROOT == NULL)
	{
		ROOT = newNode;
	}
	else
	{
		Node* t = ROOT;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = newNode;
	}
}

void print()
{
	cout << "Current Link: ";
	Node* t = ROOT;
	while(t != NULL)
	{
		cout << t->data << " -> ";
		t = t->next;
	}
	cout << endl;
}

int main()
{
    int size;
    cout<<"Enter the size of your linked list\n";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        AddLast(i+1);
    }

    int pos,j=0;
    cout << "Enter the position of the element you would like to start Josephus from\n";
    cin>>pos;

    Node* t = ROOT;
    while(t->next !=NULL)
    {
        t=t->next;
    }
    t->next = ROOT;

    Node*q = ROOT;

    for(;;)
    {
        if(j==pos)
        {
            break;
        }
        q=q->next;
        j++;
    }

    while(q->next->next != q)
    {
        q->next = q->next->next;
    }

    cout<<"\nSurviving member is number "<<t->data<<"\n\n\n";
	return 0;
}
