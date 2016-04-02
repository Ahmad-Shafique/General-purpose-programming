extern int octal_conversion(int n)
{
    int o,r;
    for(;;)
    {
        r=n%8;
        n=n/8;
        o=(o*10)+(r);
        if(n<8)
        {
            o=(o*10)+n;
        }
    }
    return o;
}
