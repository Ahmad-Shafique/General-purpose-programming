extern void even_odd()
{
    printf("\nEnter the required number\n");
    int input;
    scanf("%d",&input);
    if(input%2==0)
    {
        printf("\nEven\n");
    }
    else
    {
        printf("\nOdd\n");
    }
}
