#include<stdio.h>
int main(){
    int hrs,empl,i;
    float pay_rate=12.00;

    printf("Enter number of Hours worked: ");
    scanf("%d",&hrs);

    for(i=41 ; i>40 && i>=hrs ;i++)
    {
        printf("%.2f",pay_rate*i);
    }
    return 0;
    
}