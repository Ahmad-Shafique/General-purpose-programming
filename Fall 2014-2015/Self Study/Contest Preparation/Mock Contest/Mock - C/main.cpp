#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

struct man {
    int w1, w2;
};

struct route {
    int n;
};

int main ()
{
    int T, m, r, p;
    bool tf;
    cin >> T;
    for (int i = 0; i<T; i++)
    {
        tf = true;
        cin >> r >> m;
        route rt[r];
        man mn[m];
        for (int j = 0; j<m; j++)
        {
            cin >> mn[j].w1 >> mn[j].w2;
        }
        for (int j = 0; j<m; j++)
        {
            p = abs(mn[j].w1);
            if (rt[p-1].n != p)
                rt[p-1].n = p;
            else {
                p = abs (mn[j].w2);
                if (rt[p-1].n != p)
                    rt[p-1].n = p;
                else tf = false;
            }
        }
        if (tf == true)
            cout << "Case " << i+1 <<": Yes" << endl;
        else cout << "Case " << i+1 <<": No" << endl;
    }
    return 0;
}
