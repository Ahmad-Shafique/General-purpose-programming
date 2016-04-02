#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
srand(time(NULL));
ofstream fp;
fp.open("Test_Case.txt");
for(int i=0 ; i<=100000 ; i++)
{
char ltr1 = 'A' + random()%24;
char ltr2 = 'A' + random()%24;
char ltr3 = 'C' + random()%24;
fp<<rand()%100000<<ltr1<<ltr2<<ltr3<<endl;
}

fp.close();
return 0;
}
