#include <iostream>
#include <cstdlib>

using namespace std;

class matrix{
    private:
    int **data;
    public:
    matrix(int size1,int size2){data = new int[size1][size2];}
    void get_data(int size1,int size2);
    //matrix add_data(matrix m2);
    matrix operator+(matrix mat2);
    void show_data(int size1, int size2);
};

void matrix::get_data()
{
    for(int i=0;i<size1;i++)
    {
        for(int y=0; y<size2;y++)
        {
            cout << "Enter data for index : (" << i+1 <<"," <<y+1<<")";
            cin >> data[i][y];
        }
    }
}

matrix matrix::operator+(matrix mat2)
{
    matrix temp;
    for()
    {
        for()
        {
            temp.data = data + mat2.data;
        }
    }
    return temp;
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

void matrix::show_data(int size1, int size2)
{
    for(int i=0;i<size1;i++)
    {
        for(int y=0; y<size2;y++)
        {
            cout << data[i][y] <<"  ";
        }
        cout<<"\n";
    }
}
int main()
{
    int x,y;
    cout << "Enter 2 values for 2 indexes of the matrices" ;
    cin >> x >> y ;
    matrix m1(x,y), m2(x,y);
    cout << "Enter values of matrix 1";
    m1.get_data(x,y);
    cout << "Enter values of matrix 2";
    m2.get_data(x,y);
    m1=m1+m2;
    cout<<"\nThe resultant of the addition of 2 matrices is :\n";
    m1.show_data(x,y);
    return 0;
}
