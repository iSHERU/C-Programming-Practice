#include<stdio.h>
int main(){
    int a,b=0,num;
    printf("Enter Number: ");
    scanf("%d",&num);

    while(num>=0){
        a=num%10;
        b=a+b;
        num/=10;
    }
    printf("Sum of Digits Of Given number is : %d",b);
    return 0;
}