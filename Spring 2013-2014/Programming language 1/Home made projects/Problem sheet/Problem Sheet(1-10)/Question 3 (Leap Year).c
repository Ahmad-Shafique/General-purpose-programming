extern void leap_year()
{
    printf("\nEnter the required number\n");
    int input;
    scanf("%d",&input);
    if(input%4==0)
    {
        printf("\nLeap year\n");
    }
    else
    {
        printf("\nNot leap year\n");
    }
}
