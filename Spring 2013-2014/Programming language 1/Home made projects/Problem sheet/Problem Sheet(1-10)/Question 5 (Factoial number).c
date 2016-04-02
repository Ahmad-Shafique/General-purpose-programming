extern void factorial()
{
    printf("\nEnter the required number\n");
    long int input,x,fac;
    scanf("%ld",&input);
    fac=input;
    for (x=1;x<input;x++)
    {
        fac=fac*x;
    }
    printf("Factorial = %ld",fac);
}
