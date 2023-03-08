#include <stdio.h>
#define CUSTOMERS 2

struct bank
{
    char name[20];
    int acc_num;
    float balance;
}customer[CUSTOMERS];

int main()
{
    struct bank customer[CUSTOMERS] = {{"Sher Shah Suri", 404, 999999.99}, {"Haseeb", 405, 10000000.1}};
    int choice, acc_num, withdraw_amount, deposit_amount;

    printf("Enter Code:\n\n1 to Withdraw Money.\n2 to Deposit Money.\n\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Account No: ");
        scanf("%d", &acc_num);

        for (int i = 0; i < CUSTOMERS; i++)
        {
            if (acc_num == customer[i].acc_num)
            {
                printf("Enter Amount to be Withdrawn: ");
                scanf("%d", &withdraw_amount);

                if (customer[i].balance < withdraw_amount)
                {
                    printf("Insufficient Balance!\n");
                    printf("Balance is %.2f.", customer[i].balance);
                    break;
                }
                else
                {
                    customer[i].balance = customer[i].balance - withdraw_amount;
                    printf("%d Cash Withdrawn.\n", withdraw_amount);
                    printf("Balance is %.2f.", customer[i].balance);
                    break;
                }
            }
            
        }
        break;

    case 2:
        printf("Enter Account No: ");
        scanf("%d", &acc_num);

        for (int i = 0; i < CUSTOMERS; i++)
        {
            if (acc_num == customer[i].acc_num)
            {
                printf("Enter Amount to be Deposited: ");
                scanf("%d", &deposit_amount);

                customer[i].balance = customer[i].balance + deposit_amount;
                printf("Amount Added.");
                printf("Balance is %.2f.", customer[i].balance);
                break;
            }
        }
        break;

    default:
        printf("Invalid Selection!");
        break;
    }
    return 1;
}