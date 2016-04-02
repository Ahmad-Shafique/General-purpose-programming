extern int array_min(int m1)
{
    int c[m1],x,min;
    printf("Please enter the array values\n");
    for(x=0;x<m1;x++)
    {
        scanf("%d",&c[x]);
    }
    min=c[0];
    for(x=1;x<m1;x++)
    {
        if(min>c[x])
        {
            min=c[x];
        }
    }
    return min;
}
