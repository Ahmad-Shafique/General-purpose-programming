#include <iostream>

using namespace std;

class item{
    char *name;
    int product_id;
public:
    item(char *n,int pID):name(n),product_id(pID){}
    void show(){cout<<"Product name ="<<name<<endl<<"Product ID ="<<product_id<<endl;}
};

class utility_item:public item{
    int discount;
public:
    utility_item(char *n,int pID,int d):item(n,pID),discount(d){}
    void show(){item::show();cout<<"Discount Amount ="<<discount<<endl;}
};

class food_item:public item{
    int Date_Of_Expiry;
public:
    food_item(char *n,int pID,int D_xp):item(n,pID),Date_Of_Expiry(D_xp){}
    void show(){item::show();cout<<"Discount Amount ="<<Date_Of_Expiry<<endl;}
};

void choice(){
    cout<<"Enter the type of item you would like to add to database"<<endl;
    cout<<"1 for utility item"<<endl<<"2 for food item"<<endl;
    char name[80];
    int x,k1,k2;
    cin>>x;
    switch(x)
    {
        case 1:
        {
           cout<<"Enter product name followed by its id followed by discount amount"<<endl;
           cin>>name>>k1>>k2;
           utility_item u1(name,k1,k2);
           u1.show();
        }
        break;

        case 2:
        {
           cout<<"Enter product name followed by its id followed by Date of expiry"<<endl;
           cin>>name>>k1>>k2;
           food_item f1(name,k1,k2);
           f1.show();
        }
        break;
    }
}

int main()
{
    choice();
    return 0;
}
