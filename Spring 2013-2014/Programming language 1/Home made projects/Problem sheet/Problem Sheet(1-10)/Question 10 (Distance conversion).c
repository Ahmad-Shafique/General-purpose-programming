extern int distance_conversion()
{
    printf("\nEnter the required number\n");
    float kil_mil,mil_kil,y;
    scanf("%d",&y);
    printf("\nEnter the type of data you have entered\n1\tfor kilometer\n2\tfor mile\n");
    int choice;
    scanf("%c",&choice);
    switch(choice)
    {
    case 1:
        kil_mil=k_m(y);
        printf("\nDistance in miles = %f",kil_mil);
        break;
    case 2:
        mil_kil=m_k(y);
        printf("\nDistance in Kilometers = %f",mil_kil);
        break;
    }
}
