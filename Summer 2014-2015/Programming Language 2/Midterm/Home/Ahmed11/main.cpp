#include <iostream>

using namespace std;

class storage{
private:
    int m_nvalue;
    double m_dvalue;
public:
    storage(int nvalue, double dvalue){
        m_nvalue=nvalue;
        m_dvalue=dvalue;
    }
    friend class display;
};

class display{
private:
    bool m_bdisplayintfirst;
public:
    display(bool bdisplayintfirst){m_bdisplayintfirst = bdisplayintfirst;}
    void displayitem(storage cstorage){
        if(m_bdisplayintfirst)
            cout<<cstorage.m_nvalue<<" "<<cstorage.m_dvalue<<std::endl;
        else
            cout<<cstorage.m_dvalue<<" "<<cstorage.m_nvalue<<std::endl;
    }
};

int main()
{
    storage cstorage(5, 6.7);
    display cdisplay(false);
    cdisplay.displayitem(cstorage);
    return 0;
}
