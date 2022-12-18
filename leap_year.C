#include<stdio.h>
int main(){
    int year;
    printf("Enter number of Days in the Year: ");
    scanf("%d",&year);

    if(year&4 == 0)
    {
        printf("It is a Leap Year\n");
    }
    else
    {
        printf("It is NOT a Leap Year\n");
    }
    return 0;
}