#include<stdio.h>
#include<stdlib.h>

int main()
{
    int hour1,min1,sec1,time1,hour2,min2,sec2,time2,hour3,min3,sec3,time3;
    printf("\nEnter the first time\n");
    scanf("%d:%d:%d",&hour1,&min1,&sec1);
    printf("\nEnter the second time\n");
    scanf("%d:%d:%d",&hour2,&min2,&sec2);
    time1=(hour1*3600)+(min1*60)+sec1;
    time2=(hour2*3600)+(min2*60)+sec2;
    if(time1>time2)
    {
        time3=time1-time2;
    }
    else
    {
        time3=time2-time1;
    }
    hour3=time3/3600;
    time3=time3%3600;
    min3=time3/60;
    time3=time3%60;
    sec3=time3;
    printf("\nTime difference = %d:%d:%d\n",hour3,min3,sec3);
    return 0;
}
