#include <iostream>
#include <cstdlib>

using namespace std;

class CheckoutCalculator{
    private:
    int itemCount;
    int *itemprices;
    int total;

    public:
    CheckoutCalculator(int _itemCount);
    ~CheckoutCalculator();//{delete [] itemPrices;};
    void enterPrices();
    void displayAllPrices();
    void getTotal();
};

CheckoutCalculator::CheckoutCalculator(int _itemCount){
    itemCount = _itemCount;
    total = 0;
    itemprices = new int[itemCount];
}

CheckoutCalculator::~CheckoutCalculator(){
    delete [] itemprices;
}

void CheckoutCalculator::displayAllPrices(){
    for(int i=0; i<itemCount; i++)
    {
        cout<<"Price for item "<<(i+1)<<":";
        cout<<itemprices[i]<<endl;
    }
}

void CheckoutCalculator::enterPrices(){
    for(int i=0; i<itemCount; i++)
    {
        cout<<"Enter price for item "<<(i+1)<<":";
        cin>>itemprices[i];
        total = total + itemprices[i];
    }
}

void CheckoutCalculator::getTotal(){
    cout<<"Total :"<<total<<endl;
}


int main()
{
    int count = 0;
    cout << "Enter number of items to enter";
    cin >> count;

    CheckoutCalculator cc(count);
    cc.enterPrices();
    cc.displayAllPrices();
    cc.getTotal();

    system("pause");
}
