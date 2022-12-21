#include<stdio.h>

int main(){
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);
    if (num>=0)
    {
        num=num;
    }
    else{
        num=-num;
    }
    printf("Absolute number is %d",num);

    return 0;
}