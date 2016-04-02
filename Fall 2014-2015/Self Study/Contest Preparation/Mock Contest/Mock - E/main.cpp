#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T,N,op=0;
    scanf("%d",&T);
    for(int i=0; i<T ; i++)
    {
        scanf("%d",&N);
        int a[N],b[N],c[N],d[N];
        for(int j=0 ; j<N ; j++)
        {
            scanf("%d",&a[j]);
            c[j]=0;
            d[j]=0;
        }
        for(int j=0 ; j<N ; j++)
            scanf("%d",&a[j]);
        for(int k=0 ; k<N ; k++)
        {
            int l=0;
            while((a[k] != b[l])&& l<N)
                l++;
            if(a[k] == b[l])
            {
                c[k] = a[k];
                d[k] = a[k];
            }
        }
        int m=N,n=N;
        while(c[m]==0)
        {
            op++;
            m--;
        }
        while(d[n]==0)
        {
            op++;
            m--;
        }
        printf("Case %d: %d",i+1,op);
    }
    return 0;
}
