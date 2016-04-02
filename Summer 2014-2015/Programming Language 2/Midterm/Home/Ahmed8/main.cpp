#include <iostream>

using namespace std;

class box{
private:
    int length,breadth,height,volume,perimeter;

public:
    int Calculate_Volume();
    //friend int Calculate_Volume(box b1,box b2);
    int Calculate_Perimeter();
    //friend int Calculate_Perimeter(box b1,box b2);

};

int box::Calculate_Volume(){
    volume=length*breadth*height;
    return volume;
}

int box::Calculate_Perimeter(){
    perimeter=length+breadth+height;
    return perimeter;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
