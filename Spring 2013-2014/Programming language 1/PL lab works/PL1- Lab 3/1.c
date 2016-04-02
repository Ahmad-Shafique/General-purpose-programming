#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    char chr,chc;
    printf("press n for numerical value and a for alphabet\n");
    scanf(" %c",&chc);
    switch(chc)
    {
        case 'n':
        {
            scanf("%d",&num);
            if (num%2==0)
            {
                printf("The no. is even\n");
            }
            else
            {
                printf("The no. is odd\n");
            }
        }
        break;
        case 'a':
            {
            scanf(" %c",&chr);
            if ((chr=='a')||(chr=='e')||(chr=='i')||(chr=='o')||(chr=='u')||(chr=='A')||(chr=='E')||(chr=='I')||(chr=='O')||(chr=='U'))
            {
                printf("The alphabet is a vowel\n");
            }
            else
            {
                printf("The alphabet is a consonant");
            }
            }
        break;
        default:
            {
                printf("Invalid");
            }
    }
    return 0;
}
