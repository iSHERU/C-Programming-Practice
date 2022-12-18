#include<stdio.h>
int main(){
    int number,first,second,third,fourth,fifth,r_number;
    printf("Enter Five Digit Number: ");
    scanf("%d",&number);

    fifth=number%10;
    number/=10;

    fourth=number%10;
    number/=10;

    third=number%10;
    number/=10;

    second=number%10;
    number/=10;

    first=number%10;
    number/=10;

    number=(first*10000)+(second*1000)+(third*100)+(fourth*10)+(fifth*1);

    r_number=(fifth*10000)+(fourth*1000)+(third*100)+(second*10)+(first*1);

    printf("The reversed Five digit number is %d\n",r_number);
    
    if(number==r_number)
    {
        printf("The numbers are Equal\n");
    }
    else{
        printf("The numbers are not Equal\n");
    }
    return 0;
}