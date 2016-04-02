#include <iostream>

using namespace std;

int itr;

char vars[] = {'s1','s2','a1','a2','b1','b2','c','d1','d2','\0'};
char s1[] = {4,'C','S','A','c',NULL};
char s2[] = {3,'B','A','D',NULL};
char a1[] = {1,'a',NULL};
char a2[] = {1,'$',NULL};
char b1[] = {1,'b','S',NULL};
char b2[] = {1,'$',NULL};
char c[] = {1,'c',NULL};
char d1[] = {1,'d',NULL};
char d2[] = {1,'$',NULL};


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
