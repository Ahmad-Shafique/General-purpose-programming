
#include<stdio.h>
#include<stdlib.h>
int main()

{
    printf("WELLCOME TO IMRAN'S WORLD....\n\n");
    int a,b,c;
    printf("please enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(b>c))
    {
        printf("the smallest number is %d",c);
    }
    else if((b>=a)&&(a>c))
    {
        printf("the smallest number is %d",c);
    }
    else if((c>=a)&&(a>b))
    {
        printf("the smallest number is %d",b);
    }
    else if((c>=b)&&(b>a))
    {
        printf("the smallest number is %d",a);
    }
    else if((a>b)&&(b>=c))
    {
        printf("the smallest number is %d",c);
    }
    else if((b>a)&&(a>=c))
    {
        printf("the smallest number is %d",c);
    }
    else if((c>a)&&(a>=b))
    {
        printf("the smallest number is %d",b);
    }
    else if((c>b)&&(b>=a))
    {
        printf("the smallest number is %d",a);
    }

    else
    {
        printf("invalid");
    }
    return 0;
}





