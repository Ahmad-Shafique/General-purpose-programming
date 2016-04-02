#include <iostream>

using namespace std;

class vars
{
private :
    char name;
    char elements[];
public:
    vars();



};


char lookahead(char term)
{
    int i=0;
    while(vars[i] != '\0')
    {
        for(int j=1 ; j<= (vars[i])[0]; j++)
        {
            ;
        }
        i++;
    }
    return 0;
}

char match()
{
    char var_tar = lookahead();
}

int stmt(char input[])
{
    char x = lookahead();
    //if(x == )
    ;
}

void parser()
{
    char input[100];
    itr = 0;
    cin>>input;
    stmt(input);
}


int main()
{
    char a1[]= {4, 'X' , '\0'};
    for(int i = 0 ; i < a1[0] ; i++)
    {
        cout<<i<<a1[1]<<" ";
    }
    return 0;
}

