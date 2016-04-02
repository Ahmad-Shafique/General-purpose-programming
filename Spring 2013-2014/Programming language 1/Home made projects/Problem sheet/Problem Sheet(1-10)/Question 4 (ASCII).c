extern void ascii()
{
    printf("\nEnter the required alphabet/symbol\n");
    char input;
    scanf("%c",&input);
    if((input>64)&&(input<90))
    {
        printf("\nCapital Letter\n");
    }
}
/* 65-90  Capital letter
    97-122 Small letter
    (33-47),(58-64),(91-96),(123-126)  Special Symbols
    */
