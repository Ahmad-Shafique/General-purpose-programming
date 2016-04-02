#include <iostream>

using namespace std;

int main()
{
    int c[7]={1,2,3,4,5,6,7};
    cout<<"Enter the position you would like to start from\n";
    int x;
    cin>>x;
    for(int i=1;i<7;i++)
    {
        c[x]=0;
        x+=2;
        x=x%7;
        if(c[x]== 0)
        {
            for(int k=0;k<7;k++)
            {
                if(c[x]==0)
                {
                    x++;
                    x=x%7;
                }
                else if(c[x]!=0)
                {
                    break;
                }
            }
        }
    for(int j=0;j<7;j++)
    {
        cout<<c[j]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<7;i++)
    {
        if(c[i]!=0)
        {
            cout<<"The surviving element is "<<c[i];
            break;
        }
    }
    return 0;
}
