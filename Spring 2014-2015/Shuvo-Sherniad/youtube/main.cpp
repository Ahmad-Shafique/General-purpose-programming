#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
     string link;
     ifstream music ("Music.txt");
    while(getline(music,link)){
            link = "start /max "+link;
            system(link.c_str());
            Sleep(1000000);
     }
    return 0;
}
