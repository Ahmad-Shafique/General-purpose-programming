#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    FILE *fp;
    fp = fopen("hello.txt","r+");
    while(fp != NULL)
    {
        cout<<fp;
        fp++;
    }
    fclose(fp);
    return 0;
}
