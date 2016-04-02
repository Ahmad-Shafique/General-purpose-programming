#include <iostream>  ///INCOMPLETE
#include <cstdio>

using namespace std;

int main()
{
    int T,n,matches_survived = 0,k=1;
    scanf("%d",&T);
    if((T>=1&&T<=100)&&(n>=3&&n<=500))
    {
        for(int i=0; i<T ; i++)
        {
            scanf("%d",&n);
            char c[n];
            for(int l=0 ; l<n ;l++)
            {
                scanf("%c",&c[l]);
            }
            int j=0;
            while(k != 0 && j!=n)
            {
                if(((c[j] == 'L' || c[j] == 'l') && (c[j-1] == 'L' || c[j-1] == 'l') && (c[j-2] == 'L' || c[j-2] == 'l')))
                    k = 0;
                else
                {
                    if(c[j] == 'W' || c[j] == 'w')
                    {
                        matches_survived = 0;
                    }
                    else if(c[j] == 'D' || c[j] == 'd')
                    {
                        matches_survived = 0;
                    }
                    else if(c[j] == 'L' || c[j] == 'l')
                    {
                        matches_survived = 0;
                    }
                }
            }
        }
    }
    return 0;
}
