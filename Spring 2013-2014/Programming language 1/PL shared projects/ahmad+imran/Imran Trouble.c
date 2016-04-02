#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("please enter your height...\n");
    float height;
    scanf("%f",&height);
    if(height>=6.0)
    {
        printf("you are very tall!!!");
    }
    else if((height<6.0)&&(height>=5.8))
    {
        printf("you are tall");
    }
    else if((height<5.8)&&(height>=5.4))
    {
        printf("your height is normal");
    }
    else if((height<5.4)&&(height>4.0))
    {
        printf("you are short... :(");
    }
    else
    {
        printf("you are liliput");
    }
    return 0;
}
