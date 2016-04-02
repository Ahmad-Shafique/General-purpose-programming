#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

class matrix{
private:
    int **p,row,col;
public:
    void getdata(void);
    friend void operator+(matrix &,matrix &);
    void display(void);
    void matrixadd(matrix &a,matrix &b);
};

void matrix::getdata(void){
    cout<<"Enter size of row :-";
    cin>>row;
    p=new int *[row];
    cout<<"Enter size of coloumn :-";
    cin>>col;
    cout<<"\nEnter data for matrix of size"<<row<<"*"<<col<<endl;
    for(int i=0;i<row;i++){
        p[i]=new int [col];
    }
    for(int a=0;a<row;a++){
        for(int b=0;b<row;b++){
            cin>>p[a][b];
        }
    }
}

void matrix::display(void){
    cout<<"\n\n\n\n";
    cout<<"Display Function\n\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<setw(5)<<p[i][j];
        }
        cout<<endl;
    }
}

void matrix::matrixadd(matrix &a,matrix &b){
    int result[10][10];
    if(a.row==b.row && a.col==b.col){
        for(int i=0;i<a.row;i++){
            for(int j=0;j<a.col;j++){
                result[i][j]=a.p[i][j]+b.p[i][j];
            }
        }
        for(int x=0;x<a.row;x++){
            for(int y=0;y<a.col;y++){
                cout<<setw(5)<<result[x][y];
            }
            cout<<endl;
        }
    }
    else
        cout<<"Invalid matrix addition occurs as size differs\n";
}

int main()
{
    //matrix o1,o2;
    //o1.getdata();
    //o2.getdata();
    //clrscr();
    //o1.display();
    //o2.display();
    //getch();
    //clrscr();
    cout<<"\n\nAfter Addition has been performed\n\n";
    //matrixadd(o1,o2);
    //getch();
    cout<<setw(50)<<5;
    return 0;
}
