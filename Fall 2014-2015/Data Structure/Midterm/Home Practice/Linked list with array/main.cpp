#include <iostream>

using namespace std;

int data[5];
int link[5]={-2,-2,-2,-2,-2};

int push(int value,int pos)
{
    if(link[pos]==-2)
    {
        for(int i=0;i<5;i++)
        {
            if(link[i]!=-2)
            {
                link[i]++;
            }
            else
                continue;
        }
        link[pos]

    }
}

int main()
{


    return 0;
}
