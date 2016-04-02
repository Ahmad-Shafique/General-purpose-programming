#include <iostream>

using namespace std;

class matrix{
private:
    int row,coloumn;
    int **data;
private:
    matrix();
    matrix(int rowr,int coloumnr);
    void resultant_matrix(matrix m1,matrix m2);
    int individual_element(int r,int c);
};

matrix::matrix(){
    cin>>row>>coloumn;
    data=new int*[row];
    for(int i=0;i<row;i++)
    {
        data[i]=new int[coloumn];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloumn;j++)
        {
            cout<<"Enter the data for the coordinates("<<i+1<<","<<j+1<<")";
            cin>>data[i][j];
        }
    }
}

matrix::matrix(int rowr,int coloumnr){
    data=new int*[rowr];
    for(int i=0;i<row;i++)
    {
        data[i]=new int[coloumnr];
    }
}

void matrix::resultant_matrix(matrix m1,matrix m2){
    if(m1.row==m2.coloumn){
        matrix m3(m1.row,m1.coloumn);
        for(int i=0;i<m1.row;i++){
            for(int j=0;j<m2.coloumn;j++){
                data[i][j]=individual_element(i,j);
            }
        }
    }
    else{
        cout<<"The given matrices cannot be multiplied";
    }
}

int matrix::individual_element(int r,int c){
    for(;;){
        for(;;){

        }
        for(;;)
    }
}

int main()
{
    cout<<"Enter data for matrix 1";
    matrix m1;
    cout<<"Enter data for matrix 2";
    matrix m2;
    resultant_matrix(m1,m2);
    return 0;
}
