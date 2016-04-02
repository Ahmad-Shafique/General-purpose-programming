#include<stdio.h>
#include<stdlib.h>

int main()
{
    float height;
    scanf("%f",&height);

    if(height>=5.6)
    {
        printf("Tall");
    }
    else if((height<5.6)&&(height>=5.2))
    {
        printf("Medium");
    }
    else if((height>0)&&(height<5.2))
    {
        printf("Short");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
