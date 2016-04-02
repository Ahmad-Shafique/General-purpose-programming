extern int array_search(int search)
{
    int x,c[search],d,z=0;
    printf("Please enter the values of your array\n");
    for(x=0;x<search;x++)
    {
        scanf("%d",&c[x]);
    }
    printf("Please enter the number you are looking for\n");
    scanf("%d",&d);
    for(x=x-1;x>-1;x--)
    {
        if(d==c[x])
        {
            printf("The number exists in the database");
            return 0;
        }
    }
        printf("The no. does not exist in the database" );
}
