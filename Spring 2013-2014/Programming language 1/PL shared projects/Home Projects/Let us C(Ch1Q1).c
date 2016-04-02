/*Made by Ahmed*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    printf("In this problem, we have to calculate Ramesh's gross salary\n");
    printf("Please enter Ramesh's basic salary\n");
    float basicsalary,dearnessallowance,houserentallowance,grosssalary;
    scanf("%f",&basicsalary);
    dearnessallowance=basicsalary/100*40;
    houserentallowance=basicsalary/100*20;
    grosssalary=basicsalary+dearnessallowance+houserentallowance;
    printf("Dearness Allowance is %f\n",dearnessallowance);
    printf("House Rent Allowance is %f\n",houserentallowance);
    printf("Gross Salary is %f",grosssalary);
    return 0;
}


