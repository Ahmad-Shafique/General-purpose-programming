#include <iostream>
#include <cstdlib>

using namespace std;

class matrix{
    private:
    int **data;
    int row;
    int coloumn;
    public:
    void get_data();
    void show_data();
    void result_construct();
    int individual_element(int constant,matrix mat1,matrix mat2);
};

void matrix::get_data()
{
    int i,j;
    cout << "Enter the 2 values for rows and coloumns respectively\n";
    cin >> row >> coloumn;
    data=new int*[row];
    for(i=0;i<row;i++)
    {
        data[i]=new int[coloumn];
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            cout << "Enter the value for co-ordinates : ("<<i+1<<","<<j+1<<")\n";
            cin >> data[i][j];
        }
    }
}

void matrix::result_construct(matrix m1, matrix m2)
{
    int i,j,result[row][coloumn],constant;
    if(m1.row==m2.coloumn)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<coloumn;j++)
            {
                result[i][j]=individual_element(constant,m1,m2);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<coloumn;j++)
            {
                cout<<result[i][j]<<"   ";
            }
            cout"\n";
        }
    }
    else
    {
        cout<<"Not possible to multiply the given matrices";
    }
}

int matrix::individual_element(int constant,matrix mat1,matrix mat2)
{
    int add_result;
    for(i=0,j=0;i<mat1.row,j<mat2.coloumn)
    {
        add_result=add_result+(mat1.data[constant][i]*mat2.data[j][constant]);
    }
    return add_result;
}

void matrix::show_data()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloumn;j++)
        {
            cout << data[i][j] <<"  ";
        }
        cout<<"\n";
    }
}
int main()
{
    matrix m1, m2,m3;
    m1.get_data();
    m2.get_data();
    return 0;
}
