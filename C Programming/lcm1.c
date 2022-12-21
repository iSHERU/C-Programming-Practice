#include<stdio.h>
int main(){
    int num1,num2,max;

    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1,&num2);

    max = (num1>num2)? num1 : num2;

    for(1; ;max++)
    {
        if (max%num1==0 && max%num2==0)
        {
            printf("LCM is %d",max);
            break;
        }
        
    }
    return 0;
}