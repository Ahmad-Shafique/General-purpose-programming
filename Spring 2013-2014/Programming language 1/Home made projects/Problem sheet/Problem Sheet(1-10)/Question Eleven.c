extern int q_eleven()
{
    int choice,n,o;
    printf("Press 1 to convert decimal to octal\nPress 2 to convert decimal to binary\nPress 3 to convert decimal to hexadecimal\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            n=print();
            o=octal_conversion(n);
            printf("%d\n",n);
            printf("%d\n",o);
    }
    return 0;
}
