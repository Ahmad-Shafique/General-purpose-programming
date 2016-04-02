#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char str1[9999999],c;
    int i=0,np=1;
    while((c=getchar)!=EOF)
    {
        if(c=='"')
        {
            if(np%2==1)
            {
                str1[i]='`';
                str1[i+1]='`';
                i+=2;
                np++;
            }
            else
            {
                str1[i]='';
                str1[i+1]='`';
                i+=2;
                np++;
            }
        }
        else
        {

        }
    }
    return 0;
}
