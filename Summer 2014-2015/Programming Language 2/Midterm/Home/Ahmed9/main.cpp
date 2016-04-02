#include <iostream>
#include <cmath>

using namespace std;

class circle{
private:
    int x_coordinate,y_coordinate,radius;
public:
    circle();
    void Check_Within_Circle();
};

circle::circle(){
    cout<<"Enter the x-coordinate, y-coordinate and radius of the circle\n";
    cin>>x_coordinate>>y_coordinate>>radius;
}

void circle::Check_Within_Circle(){
    cout<<"Enter the coordinates of the point you would like to check\n";
    int x_cor,y_cor,distance;
    cin>>x_cor>>y_cor;
    distance =sqrt(pow((x_coordinate-x_cor),2)+pow((y_coordinate-y_cor),2));
    cout<<"Distance ="<<distance<<"\n";
    if(distance<=radius)
        cout<<"The point lies within the circle";
    else
        cout<<"The point lies outside the circle";
}

int main()
{
    circle c1;
    c1.Check_Within_Circle();;
    return 0;
}
