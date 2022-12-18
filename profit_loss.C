#include<stdio.h>
int main()
{
    float items,cost_price,sell_price,total_cost,total_sale,total_discount,sales,discount,sales_after_discount;

    printf("Enter Number of Items: ");
    scanf("%f",&items);
    printf("Enter Cost price of oned item: ");
    scanf("%f",&cost_price);
    printf("Enter Selling Price of one item: ");
    scanf("%f",&sell_price);
    printf("Discount offered in Percentage: ");
    scanf("%f",&discount);

    total_cost=items*cost_price;
    total_sale=items*sell_price;

    total_discount=(total_sale-total_cost)*discount/items;
    sales_after_discount=total_sale-total_discount;
    sales=total_sale-total_cost-total_discount;
    if(sales>0)
    {
    printf("\n\nThe Shopkeeper has incurred Profit\n");
    printf("\nTotal Cost price: %f\n",total_cost); 
    printf("Total Sales Price: %f\n",total_sale);
    printf("Total Discount offered: %f\n",total_discount);
    printf("Total Profit: %f\n",sales);
    printf("Sales after Discount: %f",sales_after_discount);
    }
    else if(sales<0)
    {
    printf("\n\nThe shopkeeper has incurred Loss\n\n");
    printf("\nTotal Cost price: %f\n",total_cost); 
    printf("Total Sales Price: %f\n",total_sale);
    printf("Total Discount offered: %f\n",total_discount);
    printf("Total Profit: %f\n",sales);
    printf("Sales after Discount: %f",sales_after_discount);
    }

    return 0;
}