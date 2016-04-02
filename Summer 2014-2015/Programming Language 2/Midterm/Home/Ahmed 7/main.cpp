#include <iostream>

using namespace std;

static int serial_no=1;

class box{
private:
    int length,breadth,height,volume,perimeter;

public:
    box();
    int Calculate_Volume();
    friend int Calculate_Volume(box b1, box b2);
    int Calculate_Perimeter();
    friend int Calculate_Perimeter(box b1, box b2);
    void Show_Stats();
    friend box operator+(box b1,box b2);
    friend box operator-(box b1,box b2);
    box operator=(box b1);
    box operator++();
    box operator--();
    //istream cin>>(box b);
};

box::box(){
    cout<<"Enter the length, breadth and height of box no. "<<serial_no<<"\n";
    serial_no++;
    cin>>length;
    cin>>breadth;
    cin>>height;
    perimeter=0;
    volume=0;
}

int box::Calculate_Volume(){
    volume=length*breadth*height;
    return volume;
}

int box::Calculate_Perimeter(){
    perimeter=2*(length+breadth+height);
    cout<<perimeter<<"\n";
    return perimeter;
}

int Calculate_Volume(box b1, box b2){
    int volume3;
    volume3=(b1.length*b1.breadth*b1.height)+(b1.length*b1.breadth*b1.height);
    return volume3;
}

int Calculate_Perimeter(box b1, box b2){
    int perimeter3;
    perimeter3=(2*(b1.length+b1.breadth+b1.height))+(2*(b1.length*b1.breadth*b1.height));
    return perimeter3;
}

box operator+(box b1,box b2){
    box b3;
    b3.length=b1.length+b2.length;
    b3.breadth=b1.breadth+b2.breadth;
    b3.height=b1.height+b2.height;
    b3.Calculate_Volume();
    b3.Calculate_Perimeter();
    return b3;
}

box operator-(box b1,box b2){
    box b3;
    b3.length=b1.length-b2.length;
    b3.breadth=b1.breadth-b2.breadth;
    b3.height=b1.height-b2.height;
    b3.Calculate_Volume();
    b3.Calculate_Perimeter();
    return b3;
}

box box::operator=(box b){
    length=b.length;
    breadth=b.breadth;
    height=b.height;
    volume=b.volume;
    perimeter=b.perimeter;
    return *this;
}

box box::operator++(){
    length++;
    breadth++;
    height++;
    volume++;
    perimeter++;
    return *this;
}

box box::operator--(){
    length--;
    breadth--;
    height--;
    volume--;
    perimeter--;
    return *this;
}

/*box box::cin>>(box b){
    cin>>b.length;
    cin>>b.breadth;
    cin>>b.height;
    reutrn *this;
}*/

void box::Show_Stats(){
    cout<<"\n"<<length<<" "<<breadth<<" "<<height
    <<" "<<volume<<" "<<perimeter;
}

int main()
{
    box b1;
    //b1.Calculate_Volume();
    //b1.Calculate_Perimeter();
    //b1.Show_Stats();
    return 0;
}
