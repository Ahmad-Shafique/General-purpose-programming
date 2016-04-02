extern int reverse(int x)
{
    int num=0;
    for(;x>0;)
    {
        num=(num*10) + (x%10);
        x/=10;
    }
    return num;
}
