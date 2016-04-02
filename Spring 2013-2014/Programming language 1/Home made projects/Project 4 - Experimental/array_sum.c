extern int array_sum(int s,int c[])
{
    int x,sum=0;
    for(x=0;x<s;x++)
    {
        sum=sum+c[x];
    }
    return sum;
}
