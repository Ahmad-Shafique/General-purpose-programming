#include<stdio.h>
#include<stdlib.h>

int main()
{
    float buy_price,sell_price,profit,commission_rate,commission,units_sold;
    printf("\nEnter the :-\nBuying price\nSelling price\nNumber of units sold\ncommission rate\n");
    scanf("%f%f%f%f",&buy_price,&sell_price,&units_sold,&commission_rate);
    profit=sell_price-buy_price;
    profit=profit*units_sold;
    commission=profit*(commission_rate/100);
    printf("\nCommission = %f",commission);
    return 0;
}
