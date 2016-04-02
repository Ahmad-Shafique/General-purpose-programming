extern void armstrong()
{
    printf("\nEnter the required number\n");
    int in,x,y,k,n,m,z,c,sum=0;
    int arry[5]={10000,1000,100,10,1};
    scanf("%d",&in);
    n=in;
    m=in;
    /*for(x=0,c=0;x<5;x++)
    {
        k=n/arry[x];
        n=n%arry[x];
        if(k>0)
        {
            c+=1;
        }
    }*/
    for(x=0;x<5;x++)
    {
        y=in/arry[x];
        in=in%arry[x];
        y=y*y*y;
        sum=sum+y;
    }
    if(sum==m)
    {
        printf("\nArmstrong number\n");
    }
    else
    {
        printf("Not Armstrong number");
    }
}
