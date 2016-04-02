#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* ROOT = NULL;

void add(int item)
{
	Node* newNode = new Node;
	newNode->data = item;
	newNode->left = NULL;
	newNode->right = NULL;

	if(ROOT == NULL)
	{
		ROOT = newNode;
	}
	else
	{
		Node* t = ROOT;
		while(true)
		{
			if(item <= t->data && t->left != NULL)
			{
				t = t->left;
			}
			else if(item > t->data && t->right != NULL)
			{
				t = t->right;
			}
			else
			{
				break;
			}
		}

		if(item <= t->data)
		{
			t->left = newNode;
		}
		else
		{
			t->right = newNode;
		}
	}
}

void print_inorder(Node* node)
{
	if(node != NULL)
	{
		print_inorder(node->left);
		cout << node->data << "  ";
		print_inorder(node->right);
	}
}


int main()
{
	add(70);
	add(25);
	add(55);
	add(82);
	add(67);
	add(42);
	add(15);
	add(19);
	add(36);
	add(85);
	cout << "IN ORDER: ";
	print_inorder(ROOT);
	cout << endl;
	return 0;
}
