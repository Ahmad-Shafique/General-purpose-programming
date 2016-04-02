#include <iostream>

using namespace std;

struct bst_list
{
    bst_list *leftt;
    bst_list *rightt;
    int data;
};

bst_list root = NULL;

void bst_add(int value)
{
    new bst_list temp;
    temp.data = value;
    temp->rightt = NULL;
    temp->leftt = NULL;
    if(root.data == NULL)
    {
        root = temp;
    }
    else if(root.data != NULL)
    {
        if(root.data >= NULL)
        {
            new bst_list temp1 = root;
            while(temp1->leftt != NULL)
            {
                if(temp1->leftt.data <= value)
                    break;
                temp1 = temp1->leftt;
            }
            if(temp1->leftt == NULL)
            {
                temp1->leftt = temp;
            }
            else if(temp1->leftt.data <= value)
            {
                while(temp1->rightt != NULL)
                {
                    if(temp1->rightt.data >= value)
                    break;
                    temp1 = temp1 -> rightt;
                }
                if(temp1->rightt == NULL)
                {
                    temp1->rightt = temp;
                }
                else if(temp1->rightt.data >= value)
                {
                    temp->rightt = temp1->rightt;
                    temp1->rightt = temp;
                }

            }
        }
    }
}

void bst_print_in_order()
{
    new bst_list temp1 = NULL;
    bst_list temp = root;
    while(temp->leftt != NULL)
    {
        if(temp->leftt->leftt == NULL)
        temp1 = temp->leftt;
        temp = temp->leftt;
    }
    while(temp1 != root)
    {

        cout<<temp.data<<" ";
        if(temp->rightt != NULL)
        {
            cout<<temp->rightt.data<<" ";
        }
        if(root->leftt == NULL)
        break;
    }
}

int main()
{

    return 0;
}
