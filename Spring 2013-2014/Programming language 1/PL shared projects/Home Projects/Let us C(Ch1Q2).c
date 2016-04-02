#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
float distance,metres,feet,inches,centimetres;
printf("Please enter distance between the cities in kilometres\n\n");
scanf("%f",&distance);
metres=distance*1000;
centimetres=metres*100;
feet=centimetres*0.032808399;
inches=feet*12;
printf("Distance:\n");
printf("%f metres\n",metres);
printf("%f centimetres\n",centimetres);
printf("%f feet\n",feet);
printf("%f inches\n",inches);
return 0;

}
