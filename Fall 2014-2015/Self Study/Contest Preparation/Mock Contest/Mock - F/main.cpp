#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

struct router
{
    int num;
    int rx,ry,cov_ar;
};

struct positions
{
    int yx,yy;
};

int main()
{
    int T,n,y,a;
    scanf("%d",&T);
    for(int i=0; i<T ; i++)
    {
        scanf("%d%d",&n,&y);
        router rtr[n];
        for(int j=0 ; j<n ; j++)
        {
            rtr[j].num = j+1 ;
            scanf("%d%d%d",&rtr[j].rx,&rtr[j].ry,&rtr[j].cov_ar);
        }
        positions psn[y];
        for(int k=0 ; k<y ; k++)
        {
            scanf("%d%d",&psn[k].yx,&psn[k].yy);
        }
        printf("Case %d:\n",i+1);
        for(int l=0 ; l<y ; l++)
        {
            a=0;
            for(int m = 0 ; m<n ; m++)
            {
                if(sqrt((pow(abs(rtr[m].rx - psn[l].yx),2))+(pow(abs(rtr[m].ry - psn[l].yy),2))) <= rtr[m].cov_ar)
                    a=1;
            }
            if(a==1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
