#include <iostream>
#include <cstdlib>

using namespace std;

class matrix{
    private:
    int **data;
    int row;
    int coloumn;
    public:
    //matrix(int size1,int size2){data = new int[size1][size2];}
    //~matrix(){delete [] data;}
    void get_data();
    //matrix add_data(matrix m2);
    matrix operator+(matrix mat2);
    void show_data();
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

matrix matrix::operator+(matrix mat2)
{
    int i,j;
    int result[row][coloumn];
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            result[i][j] = data[i][j] + mat2.data[i][j];
        }
    }
    cout<<"\nThe resultant of the addition of 2 matrices is :\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloumn;j++)
        {
            cout << result[i][j]<<"  ";
        }
        cout<<"\n";
    }
    //return temp;
}
/*matrix matrix::add_data(matrix m2){
    matrix temp;
    for(int i=0;i<size1;i++)
    {
        for(int y=0; y<size2;y++)
        {
            temp.data[i][y] = data[i][y] + m2.data[i][y];
        }
    }
    return temp;
}*/

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
    //int x,y;
    //cout << "Enter 2 values for 2 indexes of the matrices" ;
    //cin >> x >> y ;
    matrix m1, m2,m3;
    //cout << "Enter values of matrix 1";
    m1.get_data();
    //cout << "Enter values of matrix 2";
    m2.get_data();
    m3=m1+m2;
    //cout<<"\nThe resultant of the addition of 2 matrices is :\n";
    //m3.show_data();
    return 0;
}
