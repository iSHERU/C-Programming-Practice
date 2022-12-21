#include<stdio.h>
int main()
{
    float pay_rate=12.00,overtime_pay,num,pay;
    int employee,hrs;

    for (employee= 1; employee <= 10; employee++)
    {
        printf("Enter Number of Hours Worked by Employee %d: ",employee);
        scanf("%d",&hrs);

        if (hrs>40)
        {
            pay=pay_rate*(hrs-40);
            printf("Pay of Employee %d is %.f\n",employee,pay);
        }
        else
        {
            printf("Employee hasn't done Overtime.\n");
        }
    }
    return 0;
}