#include <stdio.h>
#define ITEMS 3

typedef struct
{
    char name[50];
    float price;
} cafe;

int main()
{
    cafe menu[ITEMS] = {{"Chai", 30}, {"Samosa", 20}, {"Paratha", 30}};

    int choice, i, item_needed;
    float total_bill = 0;

    do
    {
        printf("\nEnter Your Choice:\n");
        printf("1.Order Food\n");
        printf("2.Check Total Bill.\n");
        printf("3.Exit.\n\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nWhat do you want to order?\n");
            for (i = 0; i < ITEMS; i++)
            {
                printf("%d.%s\tPrice: %.2f\n", i + 1, menu[i].name, menu[i].price);
            }
            scanf("%d", &item_needed);

            for (i = 0; i < ITEMS; i++)
                if ((i + 1) == item_needed)
                {
                    printf("%s Ordered.\n", menu[i].name);
                    total_bill = total_bill + menu[i].price;
                    break;
                }
            break;

        case 2:
            printf("Your Total Bill is: %.2f\n", total_bill);
            break;

        case 3:
            printf("GoodBye.\n");
            break;

        default:
            printf("Invalid Selection!\n");
            break;
        }
    } while (choice != 3);
    return 0;
}