#ifndef useful_h
#define useful_h

class x
{
    int i;
public:
    x():i(3){};
    void set(int ii){i=ii;}
    const int read(){return i;}
    int permute(){return i=2*i;}
};

#endif
