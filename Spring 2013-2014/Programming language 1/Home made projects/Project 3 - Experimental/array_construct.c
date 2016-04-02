extern int array_construct(int s)
{
    int x,c[s];
    for(x=0;x<s;x++)
    {
        scanf("%d",&c[x]);
    }
    return c;
}
