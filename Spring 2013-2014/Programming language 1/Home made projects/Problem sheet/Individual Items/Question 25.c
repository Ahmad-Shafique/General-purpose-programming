#include<stdio.h>

void anglet(float time);
int main()
{
    static float time;
    float intermediate,angle=0;
    scanf(" %f",&time);
    if(time==2400)
    {
        printf("\nMinimum angle  =  0\n");
    }
    else if((time<2400)&&(time>1200))
    {
        time=time-1200;
        anglet(time);
    }
    else
    {
        anglet(time);
    }
}


void anglet(float time)
{
    float angle;
    time=time/60;
    angle=time*18;
    if((angle<=360)&&(angle>180))
    {
        angle=360-angle;
        printf("\nMinimum angle  =  %f\n",angle);
    }
    else
    {
         printf("\nMinimum angle  =  %f\n",angle);
    }
}
