#include <stdio.h>
int main()
{
    float xchange_rate, usd, pkr;
    printf("Enter Exchange rate: ");
    scanf("%f", &xchange_rate);
    printf("Enter amount in Dollars: ");
    scanf("%f", &usd);
    pkr = usd * xchange_rate;
    printf("USD to PKR value is: %.2f", pkr);

    return 0;
}