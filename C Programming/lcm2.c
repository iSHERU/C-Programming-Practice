#include<stdio.h>
int main(){
    int num1,num2;

    printf("Enter two Numbers: ");
    scanf("%d %d",&num1,&num2);

    for (int i = 1; ; i++)
    {
        if (i%num1==0 && i%num2==0)
        {
            printf("LCM is %d",i);
            break;
        }
        
    }
    return 0;
}