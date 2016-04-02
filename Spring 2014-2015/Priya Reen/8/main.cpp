#include<iostream>
#include<windows.h>
using namespace std;
template<class type>
class sstack	{
	type *ara;
	int top, size;
public:
	sstack()	{
		cout << "Give Size : ";
		cin >> size;
		ara = new type[size];
		top = -1;
	}
	sstack(int init)	{
		top = -1;
		ara = new type[init];
		size = init;
	}
	void push(int data)	{
		if(top == size - 1)	{
			cout << "Stack is full\n";
			return;
		}
		ara[++top] = data;
	}
	int TOP()	{
		return ara[top];
	}
	int pop()	{
		if(top == -1)	{
			cout << "stack is empty\n";
			return NULL;
		}
		int temp = TOP();
		top--;
		return temp;
	}
	void print_ara()	{
		cout << "stack : ";
		if(top == -1)	{
			cout << "stack is empty\n";
		}
		for(int i = 0; i <= top; i++)	{
			cout << ara[i] << " ";
		}
		cout << "\n";
	}
	void show_prompt()	{
		while(1)	{
			cout << "\n\n1 . push\n";
			cout << "2 . pop\n";
			cout << "3 . show\n";
			int inp;
			cout << "give command : ";
			cin >> inp;
			if(inp == 1)	{
				system("cls");
				type now;
				cout << "input data : ";
				cin >> now;
				push(now);
				print_ara();
			}
			else if(inp == 2)	{
				system("cls");
				pop();
				print_ara();
			}
			else if(inp == 3)	{
				system("cls");
				print_ara();
			}
			else	{
				cout << "invalid request\n";
			}
		}
	}
};
int main()
{
	sstack<int> ob;
	ob.show_prompt();
	/*ob.print();
	ob.push(3);
	ob.push(2);
	ob.print();
	ob.push(10);
	ob.push(45);
	ob.print();*/
	return 0;
}
