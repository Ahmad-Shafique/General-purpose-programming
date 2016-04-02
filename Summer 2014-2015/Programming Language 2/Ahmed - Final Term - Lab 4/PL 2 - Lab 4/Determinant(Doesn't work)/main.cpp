#include <iostream>

using namespace std;

template<typename t>
void determinant(t **mat)
{
    int i,j;
    t x=1,y=1;
    for(i=0,j=0;i<2,j<2;i++,j++)
        x=x*mat(i,j);
    for(i=1,j=0;i>-1,j<2;i--,j++)
        y=y*mat(i,j);
    cout<<x-y;
}

int main()
{
    int mat[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Determinant = ";
    determinant(mat);
    return 0;
}
