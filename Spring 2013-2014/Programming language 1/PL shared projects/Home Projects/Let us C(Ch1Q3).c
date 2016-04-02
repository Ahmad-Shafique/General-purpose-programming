#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5,aggregate,average;
    printf("Please enter the marks the student got for 5 subjects\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if((sub1<101)&&(sub2<101)&&(sub3<101)&&(sub4<101)&&(sub5<101))
       {
        aggregate=sub1+sub2+sub3+sub4+sub5;
        average=aggregate/5;
        printf("Aggregate marks = %d\n",aggregate);
        printf("Average marks = %d\n",average);
       }
    else
        {
            printf("Invalid mark entry\n Please Reenter the values");
        }

    return 0;
}
