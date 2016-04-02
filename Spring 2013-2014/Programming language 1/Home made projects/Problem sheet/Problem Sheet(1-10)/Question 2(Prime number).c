extern void prime()
{
    printf("\nEnter the required number\n");
    int input,x;
    scanf("%d",&input);
    if((input>2)&&(input!=2)&&(input!=1))
    {
        for(x=2;x<input;x++)
        {
            if(input%x==0)
            {
                printf("\nNot Prime\n");
                return 0;
            }
        }
    }
    if(x==input||input==2||input==1)
    {
        printf("\nPrime\n");
    }
    return 0;
}

