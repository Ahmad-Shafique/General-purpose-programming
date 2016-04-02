extern int array_max(int m2)

{
    int c[m2],x,max;
    printf("Please enter the array values\n");
    for(x=0;x<m2;x++)
    {
        scanf("%d",&c[x]);
    }
    max=c[0];
    for(x=1;x<m2;x++)
    {
        if(max<c[x])
        {
            max=c[x];
        }
    }
    return max;
}

