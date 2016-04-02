extern int sum_digit(int x)
{
    int g,y,sum,arry[6]={100000,10000,1000,100,10,1};
    for(g=0,sum=0;g<6;g++)
    {
        y=x/arry[g];
        x=x%arry[g];
        sum=sum+y;
    }
    return sum;
}
