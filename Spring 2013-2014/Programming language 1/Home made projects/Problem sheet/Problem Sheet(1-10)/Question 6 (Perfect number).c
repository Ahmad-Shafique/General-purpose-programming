extern void perfect_number()
{
    printf("\nEnter the required number\n");
    int input,x,sum=0;
    scanf("%d",&input);
    for(x=1;x<input;x++)
    {
        if(input%x==0)
        {
            sum=sum+x;
        }
    }
    if(sum==input)
    {
        printf("\nPerfect number\n");
    }
    else
    {
        printf("Not perfect number");
    }
}
