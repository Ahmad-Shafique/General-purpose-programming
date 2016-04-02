extern int welcome()
{
    int choice;
    printf("\a\a\t\t\tWelcome to the game zone\a\a\n\n\n\t\t\tPlease select your game\n\n\n");
    scanf("%d",&choice);
    printf("Choice");
    switch(choice)
    {
    case 1:
        {
            tic_tac_toe();
        }
    }

}
